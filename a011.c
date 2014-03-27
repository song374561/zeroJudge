#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    char line[50000];
	int length;
    int i;
    int words;
    int isWord;
    while(gets(line)){
        words = 0;
        isWord = 0;
        length = strlen(line);
        for( i = 0 ; i < length ; i++ )
            if( isalpha( line[i] ) && !isWord )
            {
                words++;
                isWord = 1;
            }
            else if( !isalpha(line[i]) )
                isWord = 0;
        printf( "%d\n", words );
    }
    return 0;
}
