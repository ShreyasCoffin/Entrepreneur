#include<stdio.h>
void main()
{
	char ch;
	puts("enter a character");
	ch = getc(stdin);
	fflush(stdin);
	puts("the entered character");
	putc(ch,stdout);	
}