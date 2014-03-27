#include <stdio.h>

int uglyNumbers[1500] = {1, 2, 3, 4, 5} ;
int base[3] = {2, 3, 5} ;


int ugly(int order) ;

int main() {
    printf("The 1500'th ugly number is %d.\n", ugly(1500) ) ;
    return 0 ;
}


int ugly(int order) 
{
    int count = 4 ;
    int temp, i, j ;
    int min ;
    order-- ;
    if(order < 5)
        return uglyNumbers[order] ;
    while(count < order) {
        min = 0 ;
        for(i=0 ; i<count ; i++) {                 
            for(j=0 ; j<3 ; j++) {                 
                temp = uglyNumbers[i]*base[j] ;
                if(temp <= uglyNumbers[count]) {
                    continue ;
                }
                else if(min==0 || min > temp) {
                    min = temp ;
                }
            }
        }
        uglyNumbers[++count] = min ;                    
    }
    return uglyNumbers[order] ;
}