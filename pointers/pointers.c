#include <stdio.h>

int main(){

    int a = 100;

    // b points to a === b stores location of a 
    // declare with asterisk and get value (dereference) with asterisk
    int *b = &a;

    printf("a  = %d\n",a);
    printf("*b = %d\n",*b);

    a = 200;

    printf("a  = %d\n",a);
    printf("*b = %d\n",*b);

    // changes the value at location b to be 300
    *b = 300;

    printf("a  = %d\n",a);
    printf("*b = %d\n",*b);

    int c = 6000;
    b = &c;
    a = 4000;

    printf("a  = %d\n",a);
    printf("*b = %d\n",*b);
    printf("c  = %d\n",c);

    return 0;
}