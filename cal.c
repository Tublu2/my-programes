#include<stdio.h>
int main()
{
 char operator;
 int i,j, e=0;
 printf("enter the operator (+,-,*,/,e)");
 scanf("%c",&operator);
 printf("enter two numbers ");
 scanf("%d %d ",&i,&j);
 switch(operator)
        
       {   
        case '+':
      	printf("%d + %d = %d",i,j,i+j); break;
 	case '-':
     	printf("%d - %d = %d",i,j,i-j); break;
 	case '*':
     	printf("%d * %d = %d",i,j,i*j); break;
 	case '/':
     	printf("%d / %d = %d",i,j,i/j); break;
                          
       // Put case 'e': here
   
 
   
}
}
