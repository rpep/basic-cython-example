cimport cython
cimport numpy as np
import numpy as np


cdef extern from "test.h":
    double c_square_list(double *list, int n)

@cython.boundscheck(False)
@cython.wraparound(False)
def square_list(np.ndarray[double, ndim=1, mode="c"] list, int n):
    return c_square_list(&list[0], n)
