#include<stdio.h>
int main(){
    int a , b , c;
    printf("Enter the a = ");
    scanf("%d",&a);
    printf("Enter the b = ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("swap number of a nad b\n");
    printf("%d\n",a);
    printf("%d", b);
}