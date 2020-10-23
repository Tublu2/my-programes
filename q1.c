#include<stdio.h>
int main()
{
 int score=0;
 char *question[10]; // character pointer/string array 
 int answer[10];
 int choice;
 int quizSize=2;
 
 printf("\nwelcome to quiz\n=================\n");
 
 question[0]="\nno1)why is it called 'c' no 'd'?\n\n\t[1] c stands for code \t[2]the inventor name start with c\n\t[3]it develop after a language  called b\t [4]why should i care? \n";
 answer[0]=3;
 question[1]="\nQ2)It was developd at ? \n\n\t[1]IBMT\t[2]bell\t[3]MIT\t[4]Microsoft\n";
 answer[1]=2;
 
 for(int i=0;i<quizSize;i++)
 {
	printf("%s",question[i]);
	printf("Answer:-");
	scanf("%d",&choice);
	if(choice==answer[i])
	{
		printf("thats correct\n");
		score=score+3;
	}
	else
	{
		printf("wrong answer");
		score=score-1;
	}
 }
 
 printf("Quiz Over. Your score=%d",score);
}
 
