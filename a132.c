#include <stdio.h>

int main()
{
	int n;
	char line[50];
	int i;
	int count;

	while(scanf("%d",&n)!=EOF && n){
		i = 0;
		count = 0;
		while(n != 1){
			if (n % 2 == 1){
				line[i++] = 1;
				count++;
			}
			else 
				line[i++] = 0;
			n /= 2;
		}
		line[i] = 1;

		printf("The parity of ");
		for (;i>=0;i--){
			printf("%d",line[i]);
		}
		printf(" is %d (mod 2).\n",++count);
	}
	return 0;
}