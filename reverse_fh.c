#include <stdio.h>
int main()
{
	FILE *fp,*fp1;
	char c;
	int i;
	fp=fopen("text.txt","r");
	fp1=fopen("rev.txt","w+");
	int n;
	printf("Enter number of characters to reverse");
	scanf("%d",&n);
	fseek(fp,n,0);
	for(i=0;i<n;i++)
	{
		c=getc(fp);
		printf("%c",c);
		fseek(fp,-2,1);
	}
	
	fclose(fp);
	fclose(fp1);
}
