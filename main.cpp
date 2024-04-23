#include "mbed.h"
#include <cstdio>

// mLab 1 Simple Loops

int t1 = 0;
int t2 = 1;
int next_term = t1 + t2;
int max_terms = 8;

int main() 
{
    printf("Hello, Lab Program 1\r\n");
    printf("Fibonacchi Sequence: %d, %d, ", t1, t2);
    for(int i=3; i<=max_terms; i++){
        printf("%d, ", next_term);
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
    }

    printf("\r\n");


    while (true) {

    }
}

