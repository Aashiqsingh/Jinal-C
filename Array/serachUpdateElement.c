
#include<stdio.h>
#include<conio.h>

void main(){


    int arr[5],find,update;
    // int flag = 0;

    for(int i=0; i<5; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Print all elements :");

    for(int i=0; i<5; i++){
        printf(" %d ", arr[i]);
    }


    printf("\n\n Enter number which u want to find :");
    scanf("%d",&find); // 15
    printf("Enter number which u update in position ");
    scanf("%d",&update);

    for(int i=0; i<5; i++){

        if(arr[i] == find)
        {
            printf("%d is present at Position %d in the array ",find,i+1);
            arr[i] = update;
            // flag = 0;
            break;
        }
        // else{
        //     flag = 1;
        // }

    
    }

    // printf("Updated value = %d",update);
    // if(flag == 1){
    //     printf("Not found This number ");
    // }

    for(int i=0;i<5;i++)
    {
        printf("\n%d ",arr[i]);
    }



}