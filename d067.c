#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if (n % 400 == 0)
			printf("a leap year\n");
		else if (n % 100 == 0)
			printf("a normal year\n");
		else if (n % 4 == 0)
			printf("a leap year\n");
		else
			printf("a normal year\n");
	}
	return 0;
}