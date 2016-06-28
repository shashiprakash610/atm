#include<stdio.h>
#include"withdraw.c"
#include"fast.c"
#include"inquiry.c"
#include"pin.c"


main()
{
	int i;
	char c;
	do
		{
			printf("********************************************************\n");
			printf("1.Withdraw				2.Fast cash\n3.Fund Transfer				4.Balance Inquiry               					\n5.Ministatement				6.Pin chnage\n7.Account information			8.Account closing\n");
			printf("*********************************************************\n");
			scanf("%d",&i);
			switch(i)
				{
					case 1: withdraw();
					break;
					case 2:fast();
					break;
					case 3:
					break;
					case 4: inquiry();
					break;
					case 5:
					break;
					case 6:pin();
					break;
					case 7:
					break;
					case 8:
					break;
					printf("do you want to continue (y or N)\n");
					scanf("%c",&c);
				}
		}
			while(c == 'Y'||c == 'y');
}
