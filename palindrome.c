#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char word[]){
    
    int length = strlen(word);

    if (length <= 1)
        return true;
    
    if (word[0] != word[length-1])
        return false;
    
    return isPalindrome(&word[1, length-1]);
}

int main(){

    char testWord[] = "racecars";

    if (isPalindrome(testWord)) {
        printf("It is a palindrome!\n");
    } else {
        printf("It is NOT a palindrome!\n");
    }


    return 0;
}