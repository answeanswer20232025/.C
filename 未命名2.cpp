#include <stdio.h>

int main()
{
	int t;
printf("请输入一个3位正整数：\n",t);
		scanf("%d",&t);

    int a=t/100;
    int c=t%10;
    int b=t/10%10;
    
    int h=c*100+b*10+a;
    printf("%d \n",h);
    
    return 0;
}
