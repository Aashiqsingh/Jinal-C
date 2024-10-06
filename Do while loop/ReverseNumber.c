#include<stdio.h>
void main(){

    int n,rev=0;
    printf("Enter the number :");
    scanf("%d",&n);  // 123

    do{
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }while(n > 0);

    printf("Reversed Number : %d",rev);
}