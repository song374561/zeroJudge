#include <stdio.h>

int main()
{
	int n;
	int year;
	while(scanf("%d",&n)!=EOF){
		while(n--){
			scanf("%d",&year);
			if (year % 400 == 0)
				printf("a leap year\n");
			else if (year % 100 == 0)
				printf("a normal year\n");
			else if (year % 4 == 0)
				printf("a leap year\n");
			else
				printf("a normal year\n");
		}
	}
	return 0;
}