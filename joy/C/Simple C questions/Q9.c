#include<stdio.h>
int main() {
    int i;
    float f;
    double df;
    char c;

    printf("Size of int: %d bytes\n", sizeof(i));
    printf("Size of float: %d bytes\n", sizeof(f));
    printf("Size of double: %d bytes\n", sizeof(df));
    printf("Size of char: %d byte\n", sizeof(c));
    
    return 0;
}