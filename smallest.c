#include<stdio.h>
int main()
{
    int num1 ,num2;
    printf("Enter the num1 = ");
    scanf("%d",& num1);
    printf("Enter the num2 = ");
    scanf("%d",& num2);
    if(num1 < num2){
    printf("num1 is smallest");
    }
    else{
        printf("num2 is smallest");
        return 0;
    }
}