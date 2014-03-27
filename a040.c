#include <stdio.h>
#include <math.h>

int armstrongNum(int n);

int main()
{
	int n,m;
	int i;
	int count;
	while(scanf("%d %d",&n,&m)!=EOF){
		for (i = n, count = 0 ; i <= m ; i++){
			if (i == armstrongNum(i)){
				printf("%d ",i);
				count++;
			}
		}
		if (count)
			printf("\n");
		else
			printf("none\n");

	}
	return 0;
}

int armstrongNum(int n)
{
	int sum = 0;
	int tempn = n;
	int digit = 0;
	
	while(n >= 1){
		digit++;
		n /= 10;
	}
	n = tempn;
	while(n >= 1){
		sum += pow(n % 10, digit);
		n /= 10;
	}
	return sum;
}