// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    int C;
    float F;
    printf("Enter the temperature in celsius :");
    scanf("%d", &C);
    F=(C*1.8)+32;
    printf("Temperature in Fahrenheit is: %f", F);
    
    return 0;
}