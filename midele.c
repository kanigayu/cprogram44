#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[50];
	int k,i;
	scanf("%s",str);
	k=strlen(str);
	if(k%2==0)
	{
		str[k/2]='*';
		str[(k/2)-1]='*';
	}
	else
	{
		str[k/2]='*';
	}
	printf("\n%s",str);
	return 0;
}
