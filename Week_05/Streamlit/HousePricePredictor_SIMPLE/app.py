import numpy as np
import pandas as pd
import streamlit as st
import joblib
from sklearn.preprocessing import OneHotEncoder
from sklearn.linear_model import LinearRegression

# Load model
model = joblib.load('LR_HPP.pkl')

st.title("🤖 MACHINE LEARNING APP")
st.info("This app builds a ML model to predict the House Prices")

with st.expander("Data"):
    st.write("**Raw data**")
    train_df = pd.read_csv('train.csv')
    train_df

    st.write("**X**")
    st.caption("feature matrix")

    train_df_d = train_df.drop(['Id','PoolQC', 'MiscFeature', 'Alley', 'Fence'], axis=1)
    categorical_cols = train_df_d.select_dtypes(include=[np.object_]).columns
    train_df_d[categorical_cols] = train_df_d[categorical_cols].fillna('None')
    numerical_cols = train_df_d.select_dtypes(include=[np.int64, np.float64])
    for col in numerical_cols:
        if train_df_d[col].isna().sum() > 0:
            train_df_d[col] = train_df_d[col].fillna(train_df_d[col].median())

    X = train_df_d.iloc[:, :-1]
    X

    st.write("**Y**")
    st.caption("Target Vector")

    Y = train_df_d.iloc[:,-1]
    Y


# streamlit UI
## input features = ['LotArea', 'SaleCondition',SaleType','OverallQoal','YearBuilt','GarageType']

with st.sidebar.expander("House Information"):
    LotArea = st.sidebar.number_input("Enter lot area (in square feet)", 1000, 30000)
    YearBuilt = st.sidebar.number_input("Enter year built", 0, 1000000)
with st.sidebar.expander("Sale Details"):
    SaleCondition = st.sidebar.selectbox("Choose sale condition", ['Normal', 'Abnorml', 'Partial', 'AdjLand', 'Alloca', 'Family'])
    SaleType = st.sidebar.selectbox('Choose saletype', [
        'WD(Warranty Deed - Conventional)',
        'New(Home just constructed and sold)',
        'COD(Court Officer Deed/Estate)',
        'ConLD(Contract Low Down)',
        'ConLI(Contract Low Interest)',
        'CWD(Warranty Deed - Cash)',
        'ConLw(Contract Low Down payment and low interest)',
        'Con(Contract 15% Down payment regular terms)',
        'Other'
    ])
with st.sidebar.expander("Other Details"):
    OverallQoal = st.sidebar.select_slider("Enter overall rating", 1, 10)
    GarageType = st.sidebar.selectbox("Select garage type", ['Attchd', 'Detchd', 'BuiltIn', 'CarPort', 'None', 'Basment', '2Types'])
