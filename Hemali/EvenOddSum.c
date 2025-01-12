#include<stdio.h>
void main()
{
    int n,rem,evenSum=0,oddSum=0;
    printf("Enter the number :-");
    scanf("%d", &n);

    while(n>0)
    {
        rem = n % 10;
        if(rem % 2 ==0)
        {
            evenSum = evenSum + rem;
        }
        else{
            oddSum = oddSum + rem;
        }
        n = n / 10;
    }

    printf("Even sum is : %d",evenSum);
    printf("\nOdd sum is : %d", oddSum);
}