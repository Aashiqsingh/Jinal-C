#include<stdio.h>
void main(){

    int n,fact=1;

    printf("Enter the number :-");
    scanf("%d",&n);

    int i = 1;

    do{
        // fact = fact * i;
        fact *= i;
        i++;
    }while(i<=n);


    printf("Factorial number :%d",fact);
}