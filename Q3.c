// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main(){
    
    int length, breadth;
    printf("Enter the length of rectangle\n");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle\n");
    scanf("%d", &breadth);

    printf("The area of rectangle is : %d\n", length*breadth);
    printf("The perimeter of rectangle is : %d\n", 2*(length+breadth));
    return 0;
}