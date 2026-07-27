#include<stdio.h>
int main(){
    int kilometer , meter;
    printf("Enter the distance in kilometer = ");
    scanf("%d",& kilometer);
    meter = 1000*kilometer;
    printf("%d\n",meter);
    printf("The distance in meter = %d",meter);
}