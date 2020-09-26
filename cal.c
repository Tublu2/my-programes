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
<<<<<<< HEAD
  {        
       {              
=======
        
       {   
>>>>>>> 9a4544406f78c18b75144a86cd5215d51bcf56d0
        case '+':
      	printf("%d + %d = %d",i,j,i+j); break;
 	case '-':
     	printf("%d - %d = %d",i,j,i-j); break;
 	case '*':
     	printf("%d * %d = %d",i,j,i*j); break;
 	case '/':
     	printf("%d / %d = %d",i,j,i/j); break;
<<<<<<< HEAD
    case 'e': return 0;
       }
 
=======
                          
       // Put case 'e': here
   
 
   
>>>>>>> 9a4544406f78c18b75144a86cd5215d51bcf56d0
}
}
