#include<stdio.h>
int main(){
    float fahrenheit , celsius;
    printf("Enter the fahrenheit = ");
    scanf("%f",& fahrenheit);
    printf("Enter the celsius = ");
    scanf("%f",& celsius);
    fahrenheit = (celsius*(9/5)+32);
    celsius = (fahrenheit - 32)*5/9;
    printf("Celsius = %f\n",celsius);
    printf("fahrenheit = %f",fahrenheit);

}