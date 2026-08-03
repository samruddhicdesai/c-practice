#include<stdio.h>
int main(){
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);
    if(num%7==0){
        printf("Multiple of 7");
    }
    else{
        printf("Is not multiple of 7");

    }
    return 0;
    


}