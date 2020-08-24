#include <stdio.h>
#include <stdlib.h>


//Significance of Volatile: What is the significance of the keyword "volatile"
void volatilefunction() {
    const volatile int local = 10; 
    int *ptr = (int*) &local; 
  
    printf("Initial value of local : %d \n", local); 
  
    *ptr = 100; 
  
    printf("Modified value of local: %d \n", local); 
}

//2D Alloc: Make a 2D alloc using the least amount of mallocs possible

int ** my2DAlloc(int rows, int cols) {
    int i;
    int header = rows * sizeof(int*);
    int data = rows * cols * sizeof(int);
    int** rowptr = (int**)malloc(header+data);
    if (!rowptr) {
        return NULL;
    }
    int* buf = (int*) (rowptr + rows);
    for (i=0; i<rows; i++ ) {
        rowptr[i] = buf + (i * cols);
    }
    return rowptr;
}