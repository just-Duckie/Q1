#include <stdio.h>
int main ()
{
	int n, s=0;
	printf("Enter an interger:  ");
	scanf("%d",&n);
	
	while (n>0)
	{
		int digit= n%10;
	    if (digit == 2||digit == 3||digit == 5||digit == 7)
		{
			s+=digit;
		}
		n/=10;
	}
printf ("Sum of prime digit:%d\n",s);

return 0;
}
