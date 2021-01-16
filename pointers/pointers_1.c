#include <stdio.h>

// accept pointer -> no extra memory, inplace operations
void square(int *x){
    // dereference assignment and square by dereferenced value
    *x *= *x;
}

// size will be 8, as it passes a pointer not the array
void sizeExample(int ages[]){
    printf("mem size of ages %lu\n", sizeof(ages));
}

int main(){
    
    int x = 5;
    square(&x);

    printf("%d\n",x);

    int size = 6;
    int ages[] = {1,2,3,4,5,6};

    printf("mem size of ages %lu\n", sizeof(ages));

    sizeExample(ages);

    return 0;
}
