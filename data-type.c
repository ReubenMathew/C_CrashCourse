#include <stdio.h>
#include <stdbool.h>

int main(){
    int a = 10;
    double b = 10.5;
    float c = 10.5;

    printf("%d\n", a);
    printf("%lu\n", sizeof(b));
    printf("%lu\n", sizeof(c));

    char d = 'a';
    char e[] = "char array";

    bool f = false;

    

    return 0;
}