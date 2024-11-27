#include <stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("input.txt","w+");
	char str[10];
	printf("Enter string");
	scanf("%s", str);
	fprintf(fp,"%s",str);
	fseek(fp,0,0);
	fscanf(fp,"%s",str); 
	printf("%s",str);
	
	fclose(fp);
	
}
