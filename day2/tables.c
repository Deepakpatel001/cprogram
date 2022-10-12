#include <stdio.h>
int main(){
    int i,n,table;
    printf("Please enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d x %d \t = %d \n",n,i,n*i);
    }
    return 0;
}