#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//void fun();
char keyword[][10]={"auto","break","case","char","const","continue","default","printf", "double","else","enum","extern","float","for","goto","if","int","do", "long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};

void main()
{
   char str[30];
   int len,i,flag=0;

   printf("Enter the C Identifier :>  ");
   gets(str);

   for(i=0;i<=32;i++)
   {
     if(strcmp(str,keyword[i])==0)
       {
  //	 fun();
       //	printf(" The Given string is invalid identifier\n");
	flag=2;
	goto A;
       }
   }
   if( str[0]=='_' || isalpha(str[0]) )
     {
	flag=1;
	len=strlen(str);
	for(i=1;i<len;i++)
	  {
	   if( str[i]=='_' || isalpha(str[i]) || isdigit(str[i]) )
	   continue;
	   else
	     {
		flag=0;
		break;
	     }
	  }
     }
      A:
     if( flag == 1 )
	printf("Given string is a valid C Identifier\n");
     else if(flag==0)
	printf("Given string is invalid C identifier\n");
     else
	printf("Given string is invalid C identifier, keyword\n");

    getch();
}
