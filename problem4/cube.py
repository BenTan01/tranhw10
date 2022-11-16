# This program take no argument
# e.g. python3 cube.py

def cb():
  for i in range(20):
    if i%2 != 0:
        print(i*i*i)
    else: 
        print(i)


cb()
