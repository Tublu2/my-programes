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
     if( ("+,-,*,/"))      
       {
        case '+':
      	printf("%d + %d = %d",i,j,i+j); break;
 	case '-':
     	printf("%d - %d = %d",i,j,i-j); break;
 	case '*':
     	printf("%d * %d = %d",i,j,i*j); break;
 	case '/':
     	printf("%d / %d = %d",i,j,i/j); break;
       }
      else
         {
           printf("to exit press value = %d ",e);
         }
}
}
