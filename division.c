#include<stdio.h>
int main(){
    int a,b,division,reminder;
    printf("Enter the a = ");
    scanf("%d", & a);
    printf("Enter the b = ");
    scanf("%d", & b);
    division = a - b;
    reminder = a % b; 
    printf(" a / b = %d\n",division);
    printf("Reminder = %d\n",reminder);
}

