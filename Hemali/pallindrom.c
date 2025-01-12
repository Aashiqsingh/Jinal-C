#include<stdio.h>
void main()
{

    int n,rem,rev=0;
    printf("ENter the number :-");  // 2345
    scanf("%d",&n);

    int temp = n;

    while(n>0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    // printf("Reverse num %d",rev);

    if(rev == temp)
    {
        printf("The number is a palindrome\n");
    }
    else{
        printf("The number is not a palindrome\n");
    }
}