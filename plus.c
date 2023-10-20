#include <stdio.h>

int main()
{   
int n;

scanf("%d",&n);
int x;
int prime[n]; 
int i;

for(i=0;i<n;i++)
	{
		prime[i]=1;
	}
	for(x=2;x<n;x++){
		if(prime[x])
		{
			for(i=2;i*x<n;i++)
			{
				prime[i*x]=0;
			}
		}
	}
	for(i=2;i<n;i++){
		if(prime[i])
		{
			printf("%d\t",i);
			
		}
	}
  printf("\n");
 return 0;
 }
