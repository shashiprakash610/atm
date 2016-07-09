#include<stdio.h>
#include<string.h>

struct information
{   
    char name[20];
    char fathername[20];
	char address [40];
	char landmark[10];
	char district[10];
	char state [10];
	int pin;
	int phone;
	
}iNfo;

main()
{
	char name [20];
	FILE *fp;
	fp = fopen("info.txt","r");
	//printf("Enter the name of account holder\n");
	//scanf("%[^\n]", name);
	//fscanf(fp,"%s", iNfo.name);
	//printf("%s", iNfo.name);
	//*if(strcmp(iNfo.name,name) == 0)
	//{
		fscanf(fp,"%s %s %s %s %s %s %d %d", iNfo.name, iNfo.fathername, iNfo.address, iNfo.landmark, iNfo.district, 					iNfo.state, &iNfo.pin, &iNfo.phone );
		printf("Account holder name:");
		printf("%s", iNfo.name);
	//}
	//else 
	//printf("***********");
	
}
