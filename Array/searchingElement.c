

// 12 13 14 15 16 


// Enter number which u want to find : 19

// // 14 is present at index 3 in the array.


// This 

#include<stdio.h>
#include<conio.h>

void main(){


    int arr[5],find;
    int flag = 0;

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

    for(int i=0; i<5; i++){

        if(arr[i] == find)
        {
            printf("%d is present at Position %d in the array ",find,i+1);
            flag = 0;
            break;
        }
        else{
            flag = 1;
        }

    }

    if(flag == 1){
        printf("Not found This number ");
    }


}