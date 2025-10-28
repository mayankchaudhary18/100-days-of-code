// write a program to swap two variables using a thrid variable.
#include <stdio.h>

int main(){
    int a,b,swap;
    printf("Enter the two integers :");
    scanf("%d %d", &a, &b);
    swap=a;
    a=b;
    b=swap;
    printf("AFTER SWAP is %d %d", a ,b );

    return 0;
}