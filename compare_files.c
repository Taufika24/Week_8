#include <stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("file1.txt","r");
	fp2=fopen("file2.txt","r");
	char x,y;
	int check=1,len1=0,len2=0;
	while((x=getc(fp1))!= EOF && (y=getc(fp2))!= EOF)
	{
		if(x!=y)
		{
			check=0;
			printf("Text is not same in both files");
			break;
		}
		if(x!=EOF)
		len1++;
		if(y!=EOF)
		len2++;
	}
	
	if(check==1)
	{
		if(len1==len2)
		printf("Text is same in both files");
		else
		printf("Text is not same in both files");
	}

}
