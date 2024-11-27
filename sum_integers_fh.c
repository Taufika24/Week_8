#include <stdio.h>
int main()
{
	FILE *fp1;
	fp1=fopen("numbers.txt","w+");
	int i,x,sum=0;
	printf("Enter numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x);
		fprintf(fp1,"%d ",x);
		sum = sum+x;
	}
	
	char str[50]="\n The sum of the integers is ";
	fprintf(fp1,"%s",str);
	fprintf(fp1,"%d",sum);
}
