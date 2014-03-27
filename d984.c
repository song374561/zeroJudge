#include <stdio.h>

int main()
{
	unsigned int a,b,c;

	while(scanf("%u %u %u",&a,&b,&c)!=EOF){
		if (a > b+c || (c > a && a > b && (a+b > c)) || (b > a && a > c && (a+c > b)))
			printf("A\n");
		else if (b > a+c || (c > b && b > a && (b+a > c)) || (a > b && b > c && (b+c > a)))
			printf("B\n");
		else
			printf("C\n");
	}
	return 0;
}