#include <stdio.h>
#include <string.h>

int main(){

    char name[10];

    scanf("%9s", name);

    int letter = 0;
    while(name[letter] != '\0'){
        letter++;
    }

    printf("%d\n",letter);

    // Same thing with header package 
    printf("%lu\n",strlen(name));

    return 0;
}