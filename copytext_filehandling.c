#include <stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("TEXT.txt","r");
	fp2=fopen("COPY.txt","w");
	char c=" ";
	while((c=getc(fp1))!= EOF)
	{
		putc(c,fp2);
	 } 
	
	fclose(fp1);
	fclose(fp2);
	
}
