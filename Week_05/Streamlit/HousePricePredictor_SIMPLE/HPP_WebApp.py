import streamlit as st
import pandas as pd
import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt



st.title("🤖 MACHINE LEARNING APP")
st.info("This app builds a machine learning model")

with st.expander("Data"):
    st.write("**Raw Data**")
    train_df = pd.read_csv("train.csv")
    train_df

    #DATA PREPROCESSING
    train_df_d = train_df.drop(['PoolQC','MiscFeature','Alley','Fence'],axis=1) # Drop columns with TOO MANY NULLS (missing percentage > 90)

    categorical_cols = train_df_d.select_dtypes(include=[np.object_]).columns
    train_df_d[categorical_cols] = train_df_d[categorical_cols].fillna('None')# Fill remaining categorical nulls with 'None'

    numerical_cols = train_df_d.select_dtypes(include=[np.int64, np.float64])
    for col in numerical_cols:
        if train_df_d[col].isna().sum() > 0:
            train_df_d[col] = train_df_d[col].fillna(train_df_d[col].median())# Fill numerical nulls (use median or 0 depending on meaning)

    X = train_df_d.iloc[:, :-1]
    Y = train_df_d.iloc[:, -1]

    st.write("**X**")
    st.caption("Feature Matrix")
    X

    st.write("**Y**")
    st.caption("Target Vector")
    Y


with st.expander("Visualisations"):

    st.write("**SalePrices Distributions**")
    st.caption("histplot")
    fig, ax = plt.subplots()
    sns.histplot(Y,kde=True,ax=ax)
    ax.set_title("Distribution of sale price")
    st.pyplot(fig)

# data preparation

with st.sidebar:
    st.header("Input Features")
    