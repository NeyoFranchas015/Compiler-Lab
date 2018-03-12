#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[200];
int k,i,j;
clrscr();
printf("Enter your input\n");
gets(ch);
k=strlen(ch);
if(ch[0]=='/' && ch[1]=='/')
 {
  printf("is a comment");
  goto A;
 }
 else if(ch[0]=='/' && ch[1]=='*' && ch[k-2]=='*' && ch[k-1]=='/')
       {
	printf("is a comment");
	goto A;
       }
for(i=2,j=4;i<k,j<k;i++,j++)
  {
   if(ch[i]=='/' && ch[i+1]=='*' && ch[j]!='*' && ch[j+1]!='/')
   j++;
   else if(ch[i]!='/' && ch[i+1]!='*')
	{
	 i++;
	 j++;
	}
   else
	goto B;
  }
  for(i=2;i<k;i++)
    {
     if(ch[i]=='/' && ch[i+1]=='/')
      {
	goto B;
      }
    }
    B:
    printf(" is not a comment",ch);
    A:
    printf("");
    getch();
  }