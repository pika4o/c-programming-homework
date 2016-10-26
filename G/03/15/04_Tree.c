
#include <stdio.h>
int main()
{
int m,i,k,ni;
scanf("%d",&m);
ni=0;
for(i=1;k<m-1;i++)
for(k=0;k<i*2-1;k++)ni++;
printf("%d\n",ni);
for(k=0;k<m-1;k++) printf(" ");
printf("*");
for(k=0;i<m-1;k++) printf(" ");
printf("\n");
for(i=1;i<m-1;i++)
{
for(k=m-i-1;k!=0;k--) printf(" ");
printf("*");
for(k=0;k<i*2-1;k++) printf("#");
printf("*");
for(k=m-i-1;k!=0;k--) printf(" ");
printf("\n");
}
for(k=0;k<m*2-1;k++) printf("*");
return 0;
}
