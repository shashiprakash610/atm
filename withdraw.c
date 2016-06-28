#include<stdio.h>
main()
//void withdraw(void)
{	


	FILE *f1,*f2;
	//long n;
	//n=0l;
	unsigned int cash = 0;
	int amount;
	printf("enter the amount multiple of 100\n");
	scanf("%d", &cash);
  	f1=fopen("file1.dat","r+");
  	fscanf(f1,"%d",&amount);
  	if(amount >= cash  && cash % 100 == 0)
  		{
  			printf("collect your money\n");
			fseek(f1,0,0);
			fprintf(f1,"%d\n",amount-cash);
		}
		
  	else
		printf("insufficient fund\n");
	fclose(f1);
	if (amount >= cash && cash % 100 == 0)
		{
			f2=fopen("mini.dat","a");
			//fprintf(f2,"%d\n",amount);
			fprintf(f2,"%d\n",amount-cash);
			fclose(f2);	
		}
}
