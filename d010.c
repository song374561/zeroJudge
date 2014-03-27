#include <stdio.h>

int f(int n);

main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if (n == f(n))
			printf("完全數\n");
		else if (n > f(n))
			printf("虧數\n");
		else
			printf("盈數\n");
	}
	return 0;
}

int f(int n)
{
	int sum=0;
	int i;
	for (i = 1 ; i < n; i++)
		if (n % i == 0)
			sum += i;
	return sum;
}

