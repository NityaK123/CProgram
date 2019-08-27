#include<stdio.h>
int main()
{
  int n;
	printf("Enter Number of element for find table:");
	scanf("%d",&n);
		int a[n],i,s,j;
	printf("Enter number:");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=1;j<11;j++)
	{
         s=j*a[i];
		printf("%d\n",s);
	}
}
}
