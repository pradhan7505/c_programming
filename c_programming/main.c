#include <stdio.h>
int main(){
    
    int num1,num2;
    char operator;
    
    printf("Enter first number:");
    scanf(" %d", &num1);
    printf("Enter the operator:");
    scanf(" %c", &operator);
    printf("Enter second number:");
    scanf(" %d", &num2);
    
    if(operator == '+')
    {
        printf("%d\n", num1+num2);
    }
    else if(operator == '-')
    {
        printf("%d\n", num1-num2);
    }
    else if (operator == '*')
    {
        printf("%c\n", num1*num2);
    }
    else if (operator == '/')
    {
        printf("%d\n", num1/num2);
    }
    else
    {
        printf("invalid command!!");
    }
    
    
    
    return 0;
}
