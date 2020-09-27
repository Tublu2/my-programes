#include<stdio.h>
int main()
{
 char operator;
 int i,j, e=0;
  
 printf("\nEnter the operator (+,-,*,/,e) :-");
 scanf("%c",&operator);

 switch(operator)
 {  
	case '+':
		printf("\nEnter two numbers for %c :\n",operator);
		scanf("%d%d",&i,&j);
		printf("%d + %d = %d",i,j,i+j); break;
	case '-':
		printf("\nEnter two numbers for %c :\n",operator);
		scanf("%d%d",&i,&j);
		printf("%d - %d = %d",i,j,i-j); break;
	case '*':
		printf("\nEnter two numbers for %c :\n",operator);
		scanf("%d%d",&i,&j);
		printf("%d * %d = %d",i,j,i*j); break;
	case '/':
		printf("\nEnter two numbers for %c :\n",operator);
		scanf("%d%d",&i,&j);
		printf("%d / %d = %d",i,j,i/j); break;
	default:	//-----------------------> This gets executed when any invalide operator is entered other than +,-,*,/
		printf("Wrong option");	
 }  
 return 0;
}
