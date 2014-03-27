#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if (n < 0)
			printf("-1\n");
		else if (n == 0)
			printf("0\n");
		else
			printf("1\n");
	}
	return 0;
}