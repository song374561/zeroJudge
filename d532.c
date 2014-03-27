#include <stdio.h>

int testYear(int n);

int main()
{
	int a,b;
	int i;
	int count;

	while(scanf("%d %d",&a,&b)!=EOF){
		for (i = a,count = 0 ; i <= b ; i++){
			if (testYear(i))
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}

int testYear(int n)
{
	if (n % 400 == 0)
		return 1;
	else if (n % 100 == 0)
		return 0;
	else if (n % 4 == 0)
		return 1;
	else
		return 0;
}