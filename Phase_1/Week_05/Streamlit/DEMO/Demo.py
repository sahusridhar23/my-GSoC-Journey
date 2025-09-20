import streamlit as st
import time as t

# To add an image
st.image("streamlit img.png")

# title- Used to add the title of a app
st.title("Streamlit Demo")

# header
st.header("Machine Learning")

# subheadder
st.subheader("Linear Regression")

# To give Information
st.info("Information details of a user")

# Warning message
st.warning("come on time or else you will be marked absent")

# write
st.write("Employer name")
st.write(range(50))

# Error message
st.error("Wrong Password")

# success message
st.success("Congrats you have got A grade")

# Markdown
st.markdown("# sridhar sahu ")
st.markdown("## sridhar sahu ")
st.markdown("### sridhar sahu ")
st.markdown("#### sridhar sahu ")
st.markdown("🌔")

st.text("sample text ")

# To write a caption
st.caption("Caption is here")

# to display a mathematical equation
st.latex(r''' a+b x^2+c''')

# Wigets

# -checkbox
st.checkbox('Login')

# -Button
st.button('Click')

# -Radio widget
st.radio("Pick your gender",["Male","Female","Other"])

# select box
st.selectbox("Pickyour Courses",["python"," ml","dl","aws","sensor design"])

# Multiselect
st.multiselect("Coose the department",['Technical','marketing','customer care'])

#selectslider
st.select_slider("Rating",['bad','good','excellent','outstanding'])

#slider
st.slider("Enter your number",0,100)

#number input
st.number_input("pick a number",0,100)

# Text input
st.text_input("Enter your email address")

# Date input
st.date_input("Birthday")

# Time input
st.time_input("Time is")

# Text area
st.text_area("Welcome to Streamlit Demo")

st.file_uploader("upload your File/Folder")

st.color_picker("color")

st.progress(90)

# spinner
with st.spinner("just wait"):
    t.sleep(2)

#balloons
st.balloons()

# Sidebar
st.sidebar.title("Streamlit")
st.sidebar.text_input("Mail Address")
st.sidebar.text_input("Password")
st.sidebar.button("submit")
st.sidebar.radio("Professional Expert",['Student','Working','Others'])