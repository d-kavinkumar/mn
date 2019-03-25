#include<stdio.h>
#include<conio.h>
void main()
{
int n,pow=1,l,i;
clrscr();
scanf("%d,%d",&n,&l);
for(i=1;i<=l;i++)
{
pow=pow*n;
}
printf("%d",pow);
	getch();
}
