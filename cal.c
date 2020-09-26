#include<stdio.h>
int main()
{
 char operator;
 int i,j, e=0;
 printf("enter the operator (+,-,*,/,e)");
 operator=getchar(); // better then scanning using scanf("%c",&operator);
 printf("enter two numbers ");
 scanf("%d %d ",&i,&j);
 
 while(1) {     // Infinite loop
 
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
    case 'e': return 0; //Loop breaks and program exits here
       }  
 }
 return 0;
}
