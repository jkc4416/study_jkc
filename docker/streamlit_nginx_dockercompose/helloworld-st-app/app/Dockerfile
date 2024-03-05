FROM python:3.11

WORKDIR /home/ubuntu/study_jkc/docker/streamlit_nginx_dockercompose/helloworld-st-app/app

COPY requirements.txt .
RUN pip install --no-cache-dir -r requirements.txt
COPY . .