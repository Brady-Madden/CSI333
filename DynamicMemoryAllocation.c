#include <stdlib.h>
#include <stdio.h>

int *createInt(int value) {
int *heapInt = (int *)malloc(sizeof(int));
*heapInt = value;
return heapInt;
}

int *createIntegerArray (int values [], int size) {
    int *vector = (int *) malloc (sizeof(int)* size);
int i;
for (i = 0; i <size; i++) {
    vector[i] = values [i];
}
return vector:
}
void destroyArray(int *array) {
free(array);
}
int *append(int*array, int size, int value) {
array = (int *)realloc(array, sizeof(int)*(size+1));
array[size] = value;
return array;
}
int removeIdx(int *array, int size, int index){
int i;
for( i = index; i < size; i++) {
array[i] = array [i+1];
}
array = realloc(array, sizeof(int)*(size-1));
return array; 
}
