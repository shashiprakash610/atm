#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 struct user
{
	char useraccount [20];
	char password [20];
}*pUser;

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


int main()
{
	login();
	return 0;
}
login()
{
	FILE *fp,*fp1;
	pUser = (struct user *) malloc (sizeof(struct user));
	int choice;
	char userAccount[20];
	char passWord[20];
	char c;
	printf("choose your costumer type\n");
	printf("---------------------------------\n");
	printf ("1.registered user\n2.new user\n");
	printf("---------------------------------\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: if((fp = fopen("file.dat", "r+")) == NULL)
				{
					if((fp = fopen("file.dat","w+")) == NULL)
					{
						printf("file could not open");
						exit(1);
					}
				}
			printf("enter the user account \n");
			scanf("%20s",userAccount);
			printf("passWord");
			scanf("%20s",passWord);
			while(fread (pUser,sizeof(pUser),1,fp) == 1)
			if(strcmp(pUser->useraccount,userAccount) == 1)
			{
				if(strcmp(pUser->password,passWord) == 1)
				{
				   printf("password match");
				}
			}	break;	
		case 2:	
					if((fp = fopen("file.dat", "a+")) == NULL)
					{
						if((fp = fopen("file.dat","w+")) == NULL)
						{
							printf("file could not open");
							exit(1);
						}
					}
					printf("enter the user account\n");
					scanf("%s",pUser->useraccount);
					printf("enter the password\n");
					scanf("%s",pUser->password);
					fwrite(pUser,sizeof(struct user ),1,fp);
					fclose(fp);
					fp1 = fopen("info.dat","a");
					getchar();
					printf("enter name\n");
					gets(iNfo.name);
					printf("enter father's name\n");
					gets(iNfo.fathername);
					printf("eneter the address \n ");
					gets(iNfo.address);
					printf("enter the landmark\n");
					gets(iNfo.landmark);
					printf("enter the district\n");
					scanf(" %s", iNfo.district);
					printf("enter the state\n");
					scanf("%s", iNfo.state);
					printf("enter the pin code\n");
					scanf("%d", &iNfo.pin);
					printf("enter the phone number\n");
					scanf("%d", &iNfo.phone);
					fprintf(fp1,"\n\n%s \n%s \n%s \n%s \n%s \n%s \n%d ", iNfo.name, iNfo.fathername, iNfo.address,  																iNfo.landmark, iNfo.district, iNfo.state, iNfo.pin);
					fprintf(fp1,"%d", iNfo.phone);
					fclose(fp1);
					break;

	}
	free(pUser);

}

