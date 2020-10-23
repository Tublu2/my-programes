#include<stdio.h>
int main()
{
 int score=0;
 int answer;
 printf("wellcome to quize\n");
 printf("no1)why is it called 'c' no 'd'? \n");
 printf("[1] c stands for code \t[2]the inventor name start with c\t[3]it develop after a language  called b\t [4]why should i care? \n");
 scanf("%d",&answer);
 if (answer==3)
 {
  printf("that's correct \n");
  score=score+3;
 }
 else
 {
  printf("wrong answer");
  score=score-1;
 }
 printf("\nQ2)It was developd at ? \n");
 printf("[1]IBMT\t[2]bell\t[3]MIT\t[4]Microsoft\n");
 scanf("%d",&answer);
 if(answer==2)
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
 
