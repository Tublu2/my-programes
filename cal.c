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
     if( ("+,-,*,/"))      //--------------------------remove this if. not needed
       {                   //  remove this line
        case '+':
      	printf("%d + %d = %d",i,j,i+j); break;
 	case '-':
     	printf("%d - %d = %d",i,j,i-j); break;
 	case '*':
     	printf("%d * %d = %d",i,j,i*j); break;
 	case '/':
     	printf("%d / %d = %d",i,j,i/j); break;
                          // -----------------------putthis here-> case 'e': return 0;
       }
   
 //------------------------ remove this part of code
//       else
//          {
//            printf("to exit press value = %d ",e);
//          }
}
}
