FROM python:3.13

WORKDIR .

COPY main.py .

CMD ["python","main.py"]

