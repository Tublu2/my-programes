#include<stdio.h>
int main()
{
 char operator;
 int choice,i,j;
 
 while(1) // Infinite Loop
 {
	 printf("\n\n==================\nCalculator Program\n==================\n");
	 printf("1. Addition +\n2.Substraction - \n3.Multiplication *\n4.Division /\n5.Exit");
	 printf("\nEnter Choice:->");
	 scanf("%d",&choice);
	 
	 switch(choice){
		case 1:operator='+';break;
		case 2:operator='-';break;
		case 3:operator='*';break;
		case 4:operator='/';break;
		case 5:printf("\nExiting program\n");return 0;
		default:  //-----------------------> This gets executed when any invalide integer is entered other than 1,2,3,4,5
			printf("Wrong Option! Enter again");
			continue;   //----------------------> this line skips code and goes back to line no 7, begining of while(1)
	 }
	 
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
 }
 
 return 0;
}
