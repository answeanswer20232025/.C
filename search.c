  #include <stdio.h>
  int search(int key;int a[];int len)
  {
  	int ret=-1;
  	for(int i=0;i<len;i++)
  	{
  		if(a[i]==key)ret=i;
  		break;
	  }
  	return ret;
   } 
   
