#include <stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("TEXT.txt","a+");
	fp2=fopen("COPY.txt","r");
	char s;
	
	while((s=getc(fp2))!= EOF)
		putc(s,fp1);
}
