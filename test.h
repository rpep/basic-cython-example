#ifndef TEST__H
#define TEST__H

double c_square_list(double *list, int n) {
    double result = 0;
    for(int i = 0; i < n; i++) {
      list[i] =  list[i]*list[i];
    }
    return result;
}

#endif
