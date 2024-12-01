#include<stdio.h>
#include<conio.h>
void main(){

    int arr[5],i;
    // clrscr();

    for(i=0;i<5;i++){

        printf("Enter [%d] index number ",i);
        scanf("%d",&arr[i]);
    }


    int max = arr[0];

    for(i=1;i<5;i++){
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("Maximum number is %d",max);

    // getch();

}



