#include <stdio.h>
int main()
{
	FILE *pf;
	pf=fopen("text.txt","r+");
	char k;
	while((k=getc(pf))!=EOF)
	{
		printf("Ascii of %c is %d \n",k,k);
	}
	
	fclose(pf);
}
