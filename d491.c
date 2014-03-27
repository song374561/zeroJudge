#include <stdio.h>

int main()
{
	int a,b;
	int max,min;
	int i;
	int sum;

	while(scanf("%d %d",&a,&b)!=EOF){
		if (a > b){
			max = a;
			min = b;
		}
		else{
			max = b;
			min = a;
		}
		for (i = min,sum = 0 ; i <= max ; i++){
			if (i % 2 == 0)
				sum += i;
		}
		printf("%d\n",sum);
	}
	return 0;
}