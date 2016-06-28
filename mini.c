#include<stdio.h>
#include<string.h>
main()
{	
	char amount;
	FILE *fp;
	fp = fopen("mini.dat", "r");
	while(!feof(fp)) 
	fscanf(fp,"%s",amount);
	int i;
	for(i=0;i<=strlen(amount);i++)
	char tempamount = amount[i];
	if(tempamount == '\n')
	printf("%s",tempamount[i]);

}
