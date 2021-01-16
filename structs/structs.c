#include <stdio.h>

// without typedef and rectangle at the end, you have to type "struct rectangle myRectangle"

// longer struct def
// struct rectangle{
//     int length;
//     int width;
// };

typedef struct{
    int length;
    int width;
} rectangle;

typedef struct {
    int x;
    int y;
} position;


typedef struct{
    char owner[30];
    rectangle rectangle;
    position position;
} buildingPlan;


int main(){

    rectangle myRectangle = {5,10};
    printf("length: %d, width: %d\n", myRectangle.length, myRectangle.width);

    buildingPlan myHouse = {"Reuben Ninan",{5,10},{32,48}};

    // pointer to struct
    buildingPlan *structPointer = &myHouse;
    // to access values of struct pointer you need to use "->"
    printf("Position x: %d\n", structPointer -> position.x);
    printf("Position y: %d\n", structPointer -> position.y);

    return 0;
}