#include<stdio.h>
#include<conio.h>
void main()
{
char s[20];
clrscr();
printf("Enter the operator symbol");
gets(s);
switch(s[0])
{
case '+' : if(s[1]=='+')
	    printf("increment operator");
	   else if(s[1]=='=')
	    printf("Assignment operator");
	   else
	    printf("Arithematic operator");
	   break;

case '-' : if(s[1]=='-')
	   printf("Decrement operator");
	   else if(s[1]=='=')
	   printf("Assignment operator");
	   else
	   printf("Arithematic operator");
	   break;

case '*' :if(s[1]=='=')
	  printf("Assignment operator");
	  else
	  printf("Arithematic operator");
	  break;
case '/' :if(s[1]=='=')
	  printf("Assignment operator");
	  else
	 printf("Arithematic operator");
	  break;

case '%' : if(s[1]=='=')
	  printf("Assignment operator");
	  else
	  printf("Arithematic operator");
	  break;

case '=' :if(s[1]=='=')
	  printf("Relational operator");
	  else
	  printf("Assignment operator");
	  break;
case '>' :if(s[1]=='=')
	  printf("Relational operator");
	  else if(s[1]=='>')
	  printf("Bytewise operator");
	  else
	  printf("Relational operator");
	  break;
case '<' :if(s[1]=='=')
	  printf("Relational operator");
	  else if(s[1]=='<')
	  printf("Bytewise operator");
	  else
	  printf("Relational operator");
	  break;

case '!' :if(s[1]=='=')
	  printf("Relational operator");
	  else
	  printf("Logical operator");
	  break;

case '&' :if(s[1]=='&')
	  printf("Logical operator");
	  else
	  printf("Bitwise operator");
	  break;
case '|' :if(s[1]=='|')
	  printf("Logical operator");
	  else
	  printf("Bitwise operator");
	  break;
case '^' : printf("Bitwise operator");
	  break;
case '~' : printf("Bitwise operator");
	  break;
default  : printf("invalid option");
	  break;
 }
getch();
}
