#include <stdio.h>

int main()
{
	int test;

	while(scanf("%d",&test)!=EOF){
		test?printf("0\n"):printf("1\n");
	}
	return 0;
}