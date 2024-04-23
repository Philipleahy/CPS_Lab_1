#include "mbed.h"
#include <cstdio>

// mLab 1 Recurive Function

int t1 = 0;
int t2 = 1;
int next_term = t1 + t2;
int nth_term = 8;

int fib(int n){
    //take and input.. caluclate part of the fibonaci series and return result
    if(n == 0 || n == 1)
        return n;
    else
        return (fib(n-1) + fib(n-2));
}

int main(){

    printf("Hello, Lab 1 Program using recursive function \r\n");

    for(int i=0; i<nth_term; i++){
        printf("%d,", fib(i));
    }

    printf("\r\n");

}