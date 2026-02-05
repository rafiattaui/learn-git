#include <stdio.h>

void increment(int *x){
    (*x)++;
}

int value = 10;
int *ptr = &value;

int main() {
    printf("Hello, World!\n");

    printf("x = %d\n", value);
    increment(ptr);
    printf("x = %d\n", value);
    return 0;
}