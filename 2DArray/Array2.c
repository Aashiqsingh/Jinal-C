#include<stdio.h>
#include<conio.h>
void main(){

    int a[3][3];
    clrscr();

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            printf("Enter a[%d][%d] index :",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Print all matrics...\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    getch();
}