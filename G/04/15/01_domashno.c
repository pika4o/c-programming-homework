#include <stdio.h>

    int main () {
        int m,i;
        scanf("%d", &m);
        int masiv[m];
        for(i=0;i<m;i++)
        {
            scanf("%d", &masiv[i]);
        }
        for(i=m-1;i>=0;i--)
        {
            printf("%d", masiv[i]);
        }

       return 0;
    }
