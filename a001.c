#include <stdio.h>
#include <stdlib.h>
int main()
{
	char line[500];
	while(scanf("%s",line)!=EOF){
		printf("hello, %s\n",line);
	}
	return 0;
}