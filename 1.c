// Building a simple calculator...
#include<stdio.h>
 int main(){
   float num1,num2,result;
   char op;//operation

        printf("Enter first number: \n");
        scanf("%f", &num1);
        printf("Enter operator(+,-,*,/): \n");
        scanf(" %c", &op);
        printf("Enter second number: \n");
        scanf("%f", &num2);
    switch(op){
    case '+':
        result = num1+num2;
        printf("Result: %.2f", result);
       break;
    case '-':
        result = num1-num2;
        printf("Result: %.2f", result);
       break;
    case '*':
        result = num1*num2;
        printf("Result: %.2f", result);
       break;
    case '/':
        if(num2 != 0){
                result = num1/num2;
               printf("Result: %.2f", result);
            }
        else{
            printf("Error: Division by zero");
        }
       break;
    default:
        printf("Invalid operator!");






    }

 }
