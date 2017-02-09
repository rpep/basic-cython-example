#ifndef TEST__H
#define TEST__H

#include<omp.h>

double c_square_list(double *list, int n) {
    double result = 0;
    int i;
    #pragma omp parallel for schedule(dynamic, 16)
    for(i = 0; i < n; i++) {
      list[i] =  list[i]*list[i];
    }
    return result;
}

#endif
