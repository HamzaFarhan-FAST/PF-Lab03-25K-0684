#include <stdio.h>
#include <stdlib.h>

int main(){

    int base;
    int height;
    int area;
    
    printf("Enter Base: ");
    scanf("%d", &base);

    printf("Enter Height: ");
    scanf("%d", &height);

    area = 0.5 * base * height;
    printf("A Triangle having a base of %d and a height of %d has an Area = %d", base,height,area);


    return 0;
}