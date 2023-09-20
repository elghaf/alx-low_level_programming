import random
import ctypes

operation = ctypes.CDLL('./100-operations.so')
first= random.randint(-111, 111)
second = random.randint(-111, 111)
print("{} + {} = {}".format(first, second, operation.add(first, second)))
print("{} - {} = {}".format(first, second, operation.sub(first, second)))
print("{} x {} = {}".format(first, second, operation.mul(first, second)))
print("{} / {} = {}".format(first, second, operation.div(first, second)))
print("{} % {} = {}".format(first, second, operation.mod(first, second)))
