#include<stdio.h>

main()
{	
	FILE *f4;
	int amount;
	int cash,i;
	f4 = fopen("file1.dat","r+");
	printf("*********************************\n*********************************\n");
	printf("Select the amount for your fast cash transication\n\n");
	printf("1.$500			2.$1000\n3.$5000			4.$10000\n");
	printf("*********************************\n*********************************\n");
	scanf("%d", &i);
	fscanf(f4,"%d",&amount);
	switch(i){
		case 1:	if(amount >= 500)
				{
					printf("collect your money\n");
					fseek(f4,0,0);
					fprintf(f4,"%d\n",amount-500);
				}
				else
					printf("insufficient fund\n");
				break;
		case 2: if(amount >= 1000)
				{
					printf("collect your money\n");
					fseek(f4,0,0);
					fprintf(f4,"%d\n",amount-1000);
				}
				else
					printf("insufficient fund\n");
				break;
		case 3: if(amount >= 5000)
				{
					printf("collect your money\n");
					fseek(f4,0,0);
					fprintf(f4,"%d\n",amount-5000);
				}
				else
					printf("insufficient fund\n");
				break;
		case 4: printf("500");
				if(amount >= 10000)
				{
					printf("collect your money\n");
					fseek(f4,0,0);
					fprintf(f4,"%d\n",amount-10000);
				}
				else
					printf("insufficient fund\n");
				break;
	}
	fclose(f4);
	
}

