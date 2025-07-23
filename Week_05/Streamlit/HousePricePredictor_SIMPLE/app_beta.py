import os
import numpy as np
import pandas as pd
import streamlit as st
import joblib
from sklearn.preprocessing import OneHotEncoder
from sklearn.linear_model import LinearRegression



# Load model

model_path = os.path.join(os.path.dirname(__file__), 'LR_HPP.pkl')
model = joblib.load(model_path)
encoder_path = os.path.join(os.path.dirname(__file__), 'encoder.pkl')
OHE = joblib.load(encoder_path)

st.title("🤖 MACHINE LEARNING APP")
st.info("This app builds a ML model to predict the House Prices")

# Streamlit UI
st.sidebar.title("Input Features")

LotArea = st.sidebar.number_input("Enter lot area (in square feet)", 1000, 30000)
YearBuilt = st.sidebar.number_input("Enter year built", 1800, 2025)
SaleCondition = st.sidebar.selectbox("Choose sale condition", ['Normal', 'Abnorml', 'Partial', 'AdjLand', 'Alloca', 'Family'])
SaleType = st.sidebar.selectbox('Choose sale type', [
    'WD',
    'New',
    'COD',
    'ConLD',
    'ConLI',
    'CWD',
    'ConLw',
    'Con',
])
GarageType = st.sidebar.selectbox("Select garage type", ['Attchd', 'Detchd', 'BuiltIn', 'CarPort', 'None', 'Basment', '2Types'])
OverallQual = st.sidebar.select_slider("Enter overall rating", range(1, 11))

# Preprocessing function
def preprocess_input(user_df):
    # Separate numerical and categorical
    cat_df = user_df[['SaleCondition', 'SaleType', 'GarageType']]
    num_df = user_df[['LotArea', 'YearBuilt', 'OverallQual']]

    # One-hot encode categorical
    cat_encoded = OHE.transform(cat_df)

    # Concatenate
    final_input = np.concatenate([num_df.values, cat_encoded], axis=1)
    return final_input

# Prediction block
if st.button("Predict Price"):
    user_input = {
        'LotArea': LotArea,
        'YearBuilt': YearBuilt,
        'OverallQual': OverallQual,
        'SaleCondition': SaleCondition,
        'SaleType': SaleType,
        'GarageType': GarageType
    }

    user_df = pd.DataFrame([user_input])
    final_input = preprocess_input(user_df)
    prediction = model.predict(final_input)
    st.success(f"🏠 Estimated House Price: ₹{prediction[0]:,.2f}")
