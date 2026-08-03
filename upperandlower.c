#include<stdio.h>
int main(){
    char ch;
    printf("Enter the ch = ");
    scanf("%c",& ch);
    if(ch>='A'&&ch<='Z'){
        printf("Uppercase");
    }
    else if(ch>='a'&&ch<='z'){
        printf("Lowercase");
    }
    else{
        printf("NOt an alphabet");
    }
    return 0;
}