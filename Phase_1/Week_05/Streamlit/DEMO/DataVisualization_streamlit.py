import streamlit as st

st.title("Data Visualizations with Streamlit")
import pandas as pd
import numpy as np
st.title("Bar Chart")
data = pd.DataFrame(np.random.randn(50,2),columns=["x","y"])
st.bar_chart(data)
st.title("Line Chart")
st.line_chart(data)
st.title("Area Chart")
st.area_chart(data)

with st.expander('Data'):
    st.write("**Random Data**")
    data

    st.write('**X**')
    X = data.iloc[:,:-1]
    X

    st.write('**Y**')
    Y= data.iloc[:,-1]
    Y