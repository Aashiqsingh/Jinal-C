#include<stdio.h>
void main(){

    int arr[2][2] = { {42,56} , {69,74}};

    // printf("%d",arr[0][0]);
    // printf("%d",arr[0][1]);
        // printf("%d",arr[1][0]);

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    


}