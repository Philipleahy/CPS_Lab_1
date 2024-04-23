#include "mbed.h"

// mLab 1 Simple Loops

int t1 = 0;
int t2 = 1;
int next_term = t1 + t2;
int max_terms = 8;

int main()
{
    printf("Hello, Lab Progrm 1 \r\n");
    printf("Fibonacchi sequence: %d, %d, ", t1 + t2);
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

