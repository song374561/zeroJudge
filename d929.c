#include <stdio.h>
#include <string.h>

int testPalin(char line[]);

int main()
{
	char line[105];
	int n;
	while(scanf("%d",&n)!=EOF){
		while(n--){
			scanf("%s",line);
			if (testPalin(line)){
				printf("yes\n");
			}
			else{
				printf("no\n");
			}
		}
	}
	return 0;
}

int testPalin(char line[])
{
	int i,j;
	for (i = 0, j = strlen(line)-1 ; i < strlen(line); i++,j--){
		if (line[i] != line[j])
			return 0;
	}
	return 1;
}