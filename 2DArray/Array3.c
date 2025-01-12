#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20][20];
    int i,j,row,col;

    printf("Enter the row :-");
    scanf("%d",&row);
    printf("Enter the column :-");
    scanf("%d",&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter of a[%d][%d] index is :",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Print all matrics here \n\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    getch();
}