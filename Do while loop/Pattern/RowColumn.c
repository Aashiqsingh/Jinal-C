#include<stdio.h>
void main(){

    int row,col;

    printf("Enter the row :-");
    scanf("%d",&row);
    printf("Enter the column :-");
    scanf("%d",&col);

    int i=1;
    
    do{

        int j=1;

        do{
            printf("*");
            j++;
        }while(j<=col);

        printf("\n");
        i++;

    }while(i<=row);


}