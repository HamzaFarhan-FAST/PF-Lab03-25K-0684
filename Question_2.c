#include <stdio.h>
#include <stdlib.h>

int main(){

    char name[20];
    int age;
    char department[20];
    char std_ID[8];
    char uni_name[30];


    printf("Enter Your Name: ");
    scanf("%s", name);

    printf("Enter Your Age: ");
    scanf("%d", &age);

    printf("Enter Your Deparment Name: ");
    scanf("%s", department);

    printf("Enter Your Student ID: ");
    scanf("%s", std_ID);
    
    printf("Enter Your University Name: ");
    scanf("%s", uni_name);

    printf("\n---Student's Description---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Department: %s\n", department);
    printf("Student ID: %s\n", std_ID);
    printf("University Name: %s\n", uni_name);

    return 0;
}