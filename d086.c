#include <stdio.h>
#include <string.h>
#include <ctype.h>

int testWord(char line[]);

int main()
{
	char word[210];
	int i;
	int sum;
	while(scanf("%s",word)!=EOF){
		sum = 0;
		if (word[0] == '0' && word[1] == 0)
			break;
		if (testWord(word)){
			for (i = 0 ; i < strlen(word) ; i++){
				word[i] = toupper(word[i]);
			}
			
			for (i = 0 ; i < strlen(word) ; i++){
				sum += word[i]-'A'+1;
			}
			printf("%d\n",sum);

		}
		else
			printf("Fail\n");
	}
	return 0;
}

int testWord(char line[])
{
	int i;
	for (i = 0 ; i < strlen(line) ; i++){
		if (!isalpha(line[i]))
			return 0;
	}
	return 1;
}