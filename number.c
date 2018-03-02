#include<stdio.h>
int main()
{
int n,l,k;
scanf("%d\n",&n);
scanf("%d\t%d",&l,&k);
if(n>l && n<k)
{
printf("yes");
}
else
printf("no");
return 0;
}
