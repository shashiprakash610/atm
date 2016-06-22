void inquiry(void)
{   
	FILE *f2;
	int cash;
	f2 = fopen("file1.dat","r+");
	fscanf(f2,"%d",&cash);
	printf("%d\n",cash);
	fclose(f2);
}
