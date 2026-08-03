#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number = ");
    scanf("%d",& num);
    if((num%3==0)&&(num%5==0)){
        printf("Divisible by both 3 and 5");   
    }
    else{
        printf("NOt DIvisible by both 3 nad 5");
    }
    return 0;
}
