#include <stdio.h>

int testSortAns(int count);
void sortAnsArray(int count);
int testSortPor(int count);
void sortProArray(int count);
void showOutput(int count);
int result[1005][2];

int main()
{
	int n;
	int a[1005], b[1005];
	int i;
	int count;

	while (scanf("%d", &n) != EOF && n){
		i = 0;
		while (n--){
			scanf("%d", &a[i]);
			scanf("%d", &b[i]);
			result[i][0] = a[i] + b[i];

			if (a[i] > b[i])
				result[i][1] = 1;
			else if (a[i] == b[i])
				result[i][1] = 0;
			else if (a[i] < b[i])
				result[i][1] = -1;
			i++;
		}
		count = i;

		while (testSortAns(count)){
			sortAnsArray(count);
		}
		while (testSortPor(count)){
			sortProArray(count);
		}

		showOutput(count);
		printf("\n");
	}
}

int testSortAns(int count)
{
	int i;
	for (i = 0; i <= count; i++){
		if (result[i][0] < result[i + 1][0])
			return 1;
	}
	return 0;
}

void sortAnsArray(int count)
{
	int i;
	int tempAns,tempPor;

	for (i = 0; i <= count; i++){
		if (result[i][0] < result[i + 1][0]){
			tempAns = result[i][0];
			tempPor = result[i][1];
			result[i][0] = result[i + 1][0];
			result[i][1] = result[i + 1][1];
			result[i + 1][0] = tempAns;
			result[i + 1][1] = tempPor;
		}
	}
}

int testSortPor(int count)
{
	int i;
	for (i = 0; i <= count; i++){
		if (result[i][0] == result[i + 1][0] && result[i][1] < result[i + 1][1]){
			return 1;
		}
	}
	return 0;
}

void sortProArray(int count)
{
	int i;
	int tempPor;

	for (i = 0; i <= count; i++){
		if (result[i][0] == result[i + 1][0] && result[i][1] < result[i + 1][1]){
			tempPor = result[i][1];

			result[i][1] = result[i + 1][1];

			result[i + 1][1] = tempPor;
		}
	}
}

void showOutput(int count)
{
	int i;
	for (i = 0; i < count; i++){
		if (result[i][1] == 1)
			printf(">");
		else if (result[i][1] == 0)
			printf("=");
		else if (result[i][1] == -1){
			printf("<");
		}
		printf("%d ", result[i][0]);
	}
}