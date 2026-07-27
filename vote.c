#include<stdio.h>
int main(){
    int age;
    printf("Enter the age = ");
    scanf("%d",& age);
    if(age>18){
        printf("You can vote");
    }
    else if(age<18){
        printf("Tou cannot vote");
    }
    else{
        printf("You are 18 we should test your driving");
    }
}