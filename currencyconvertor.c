#include<stdio.h>

//converting dollar to inr

int main(){
    float rupees,dollar;


    printf("enter the amount you want to convert in dollars:\n");
    scanf("%f", &dollar);

    rupees = dollar * 84.07;
    printf("$%f = Rs.%f",dollar,rupees);
    return 0;
}