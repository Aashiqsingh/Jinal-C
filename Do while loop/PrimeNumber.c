#include<stdio.h>
void main(){


    int n,flag=0;

    printf("Enter the number :-");
    scanf("%d",&n);  // 7

    int i = 2;

    do{
        if(n%i==0){
            flag=1;
            break;
        }

        i++;
    }while(i<n);

    if(flag == 0)
    {
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }   




}