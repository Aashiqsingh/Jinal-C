#include<stdio.h>
#include<conio.h>

void main()
{
    char str[5];


    for(int i=0;i<5;i++)
    {
        printf("Enter your name [%d] character",i+1);
        scanf("%s",&str[i]);
    }

    for(int i=0;i<5;i++){
        printf("%c",str[i]);
    }

    printf("Reverse name :- \n\n");

    for(int i=4;i>=0;i--){
        printf("%c",str[i]);
    }


    getch();
}