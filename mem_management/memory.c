#include <stdio.h>
#include <stdlib.h> // required for memory functions

void fun(){
    int static x = 0; // saves x to persistent memory, scope stays the same
    x++;
    printf("%d\n",x);
}

int main(){

    fun();
    fun();
    fun();

    int data[50] = {};

    int size;    
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int)); // mem allocate array with size * byte size of each integer

    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    

    return 0;
}