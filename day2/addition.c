#include <stdio.h>
int main(){
    int num1=0,num2=0,sum=0;
    printf("Please enter first number: ");
    scanf("%d",&num1);
    printf("Please enter second number: ");
    scanf("%d",&num2);
    sum = num1+num2;
    printf("Sum of two numbers is %d",sum);
    return 0;
}