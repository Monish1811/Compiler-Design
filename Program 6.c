#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char w[100];
	int c=0;
	printf("Enter the string:");
	scanf("%s",w);
	for(int i=0;i<strlen(w);i++)
	{
		if((w[0]>='a' and w[0]<='z')or (w[0]>='A' and w[0]<='Z') or ( w[0]=='_'))
		{
			c=1;
		}
	}
	if(c==0)
	{
		printf("Not a valid identifier");
	}
	else if(c==1)
	{
		printf("Valid identifier");
	}
}
