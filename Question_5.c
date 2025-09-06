#include <stdio.h>
#include <stdlib.h>

int main(){

    int N1;
    int N2;

    printf("Enter 1st Number: ");
    scanf("%d", &N1);
    printf("Enter 2nd Number: ");
    scanf("%d", &N2);

    N1 = N1 + N2;
    N2 = N1 - N2;
    N1 = N1 - N2;

    printf("The Values have been Swapped\n");
    printf("Num1 : %d\n", N1);
    printf("Num2 : %d", N2);




    return 0;
}