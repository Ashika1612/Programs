#include<stdio.h>
main()
{
	//Declare the FILE pointer
	FILE *fp1 , *fp2;
	int x,i=0;
	char ch;
	// OPEN - Read , Write , Append
	fp1 = fopen("new.txt","r");
	if (fp1==NULL)
	{
		printf("FILE DOES NOT EXISTS");
		return 0;
	}
	// READ content from the file
	fseek(fp1,0,SEEK_END);
	x=ftell(fp1);
	while(i<x)
	{
		i++;
		fseek(fp1,-i,SEEK_END);
		printf("%c",fgetc(fp1));
	}
	// COPY contents from one file to another
	fp2 = fopen("copy.txt","w");
	ch = fgetc(fp1);
	while(ch!=EOF)
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}                                   
	fclose(fp1); 
	fclose(fp2);
	return 0;
}
 
