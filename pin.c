//void pin(void)
//#include<stdio.h>
//#include<string.h>
struct user
{
	char useraccount [20];
	char password [20];
}pUser;

//main()
void pin(void)
{
	FILE *fp;
	char newPassword[20];
	fp = fopen("file.dat","r");
	fscanf(fp,"%s",pUser.password);
	fclose(fp);
	printf("enter the new password\n");
	scanf("%s",newPassword);
	if(strcmp(pUser.password,newPassword) == 0)
		printf("old password\n");
	else {
		printf("password change sucessfully\n");
		fp = fopen("file.dat", "w");
		fprintf(fp,"%s",newPassword);
		fclose(fp);
	}
}
