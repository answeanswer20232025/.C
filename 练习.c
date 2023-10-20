#include <stdio.h>
 

int main()
 {
int x=0;
for(x=2;x<100;x++)
{
		int i=0;
	    int p=1;
	
	for(i=2;i<x;i++)
	{
		if(x%i==0){
		
			p=0;
			break;
	}else{p=1;
	}
	
	} if (p==1){printf("%d\n",x);
	}
	
	}
}
