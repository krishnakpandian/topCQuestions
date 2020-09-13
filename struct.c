#include <stdio.h>
#include <stdlib.h>


typedef struct A {
    int x;
    short int y;
    double z;
}A;


typedef struct B {
    int x;
    double y;
    short int z;
}B; 

typedef struct C {
    double x;
    int y;
    short int z;
}C;

typedef struct D {
    char* x;
    int y;
    short int z;
    char* w;
}D;

typedef struct E {
    int y;
    short int z;
    char* x;
    char* w;
}E;

typedef struct F {
    char x[10];
    int y;
    short int z;
}F;


int main() {
    printf("Size of int: %lu \n", sizeof(int));
    printf("Size of float: %lu \n", sizeof(float));
    printf("Size of char: %lu \n", sizeof(char));
    printf("Size of char*: %lu \n", sizeof(char*));
    printf("Size of short int: %lu \n", sizeof(short int));

    printf("\n");

    printf("Size of Struct A: %lu \n", sizeof(A));
    printf("Size of Struct B: %lu \n", sizeof(B));
    printf("Size of Struct C: %lu \n", sizeof(C));

    printf("Size of Struct D: %lu \n", sizeof(D));
    printf("Size of Struct E: %lu \n", sizeof(E));
    printf("Size of Struct F: %lu \n", sizeof(F));

    return EXIT_SUCCESS;
}