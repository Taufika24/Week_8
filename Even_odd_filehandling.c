#include <stdio.h>
int main()
{
	FILE *fp,*fp1,*fp2;
	fp=fopen("data.txt","w+");
	int i,x;
	for(i=0;i<20;i++)
	{
		fprintf(fp,"%d ",i);
	}
	fseek(fp,0,0);
	fp1=fopen("even.txt","w+");
	fp2=fopen("odd.txt","w+");
	for(i=0;i<20;i++)
	{
		fscanf(fp,"%d",&x);
		if(x%2==0)
			fprintf(fp1,"%d ",x);
		else
			fprintf(fp2,"%d ",x);
	}
	
	fclose(fp);
	fclose(fp1);
	fclose(fp2);
	
}
