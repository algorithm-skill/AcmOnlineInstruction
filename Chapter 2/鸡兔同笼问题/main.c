#include <stdio.h>
#include <stdlib.h>



void main()
{
    int n, count;
    scanf("%d", &count);
    while(count--){
        scanf("%d",&n); 
        int max = 0, min = 0;
        if (n % 2 != 0) {
            min = 0;
            max = 0;
        }else if (n % 4 == 0) {
            max = n / 2;
            min = n / 4;
        }else{
            max = n / 2;
            min = (n - 2) / 4 + 1;
        }
        printf("%d %d\n", min, max);
    }
}