#include <stdio.h>
#include <math.h>

main()
{
    int a,b,c;
    int cent1,cent2;
    
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        if (b*b-4*a*c < 0){
            printf("No real root\n");
            
        }
        else{
            cent1 = (-b+sqrt(b*b-4*a*c))/(2*a);
            cent2 = (-b-sqrt(b*b-4*a*c))/(2*a);
            if (cent1 == cent2)
                printf("Two same roots x=%d\n",cent1);
            else if (cent1 > cent2)
                printf("Two different roots x1=%d , x2=%d\n",cent1,cent2);
            else
                printf("Two different roots x1=%d , x2=%d\n",cent2,cent1);
            }
        
        }
    return 0;
}