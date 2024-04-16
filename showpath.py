import os

for s in os.environ['PATH'].split(";"):
    print(s)
