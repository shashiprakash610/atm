#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 struct user
{
	char useraccount [20];
	char password [20];
}*pUser;

int main()
{
	 login();
	return 0;
}
void login(void)
{
	FILE *fp;
	pUser = (struct user *) malloc (sizeof(struct user));
	int choice;
	char userAccount[20];
	char passWord[20];
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
		case 2:	do{
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
					f
				}
	}
}

