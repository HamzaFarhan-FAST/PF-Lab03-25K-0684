#include <stdio.h>
#include <stdlib.h>

int main(){

    double km;
    double m;
    double cm;
    
    printf("Enter the distance in KM: ");
    scanf("%lf", &km);

    m = km*1000;
    cm = km*100000;

    printf("The entered distance in meters is : %.2lf meters\n", m);
    printf("The entered distance in centimeters is : %.2lf centimeters\n", cm);


    return 0;
}