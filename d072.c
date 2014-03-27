#include <stdio.h>

int main()
{
	int n;
	int count;
	int year;
	while(scanf("%d",&n)!=EOF){
		count = 1;
		while(n--){
			scanf("%d",&year);
			if (year % 400 == 0)
				printf("Case %d: a leap year\n",count++);
			else if (year % 100 == 0)
				printf("Case %d: a normal year\n",count++);
			else if (year % 4 == 0)
				printf("Case %d: a leap year\n",count++);
			else 
				printf("Case %d: a normal year\n",count++);
		}
	}
	return 0;
}