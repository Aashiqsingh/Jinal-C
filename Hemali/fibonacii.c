#include<stdio.h>
void main(){

    int n,a=0,b=1,c;
    // printf("Enter a number :-");
    // scanf("%d",&n);

    printf("%d %d",a,b);

    for(int i=0;i<10;i++){
        c = a+b;
        printf(" %d",c);
        a = b;
        b = c;
    }

}


