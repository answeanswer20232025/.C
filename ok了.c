#include <stdio.h>
#include <stdlib.h>


int max(int a[],int len)
{
	int m=0;
	int v;
	for (v=0;v<len;v++)
	{if(a[v]>a[m]){
		m=v;
		return m;
	}
	}
 } 
int main()
{
	
int a[]={1,56,43,456,4654,42,7,45,52,4,45};
int len=sizeof (a)/sizeof (a[0]);
	int i;
	for( i=len-1;i>0;i--){
		int m=max(a,i+1);
		int t=m;
		 a[m]=a[i];
		a[i]=t;
	}
	 
	for( i=0;i<len;i++)
	{
		printf("%d\n",a[i]);
	}
	
	
	
	
	
	
	
	return 0;
}
