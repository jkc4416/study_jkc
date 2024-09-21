# 이미지를 만들 때 base가 되는 이미지 저장
FROM amd64/python:3.9-slim

# 이미지를 만들 때 실행할 코드를 지정 (첫 번째 RUN에서는 해당 Dockerfile을 이용하여 Data generator를 띄울 때, 컨테이너 안에 접근하여 psql을 사용하기 위해 postgresql-client를 설치함)
RUN apt-get update && apt-get install -y \
    postgresql-client \
    && rm -rf /var/lib/apt/lists/*

# 작업 디렉토리를 생성 (해당 디렉토리가 없는 경우 새로 생성함 & 작업 디렉토리를 지정하면 그 이후 명령어는 해당 디렉토리를 기준으로 동작)
WORKDIR /usr/app

# 이미지를 만들 때 실행할 코드를 지정 (두 번째 RUN에서는 컨테이너에서 python 스크립트를 실행할 때 필요한 scikit-learn, pandas, psycopg2-binary 패키지들을 설치함)
RUN pip install -U pip &&\
    pip install scikit-learn pandas psycopg2-binary

# 파일이나 폴더를 이미지에 복사함 (상대 경로를 사용할 경우, WORKDIR로 지정한 디렉토리를 기준으로 복사함)
COPY data_generator.py data_generator.py

# 컨테이너가 실행될 때 시작할 프로세스를 입력
ENTRYPOINT ["python", "data_generator.py", "--db-host"]

# 컨테이너가 실행될 때 ENTRYPOINT에 전달할 Argument 입력
# Change CMD to solve host finding error
CMD ["localhost"]