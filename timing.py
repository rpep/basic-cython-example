import time
import test
import numpy as np
n = 1000000

a = np.linspace(0, 100, n)
b = np.linspace(0, 100, n)

start = time.time()
a = a**2
end = time.time()
print('Numpy square took = {}'.format(end - start))


start = time.time()
test.square_list(b, n)
end = time.time()
print('My square took = {}'.format(end - start))

