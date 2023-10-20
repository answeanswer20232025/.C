#include <stdio.h>
#include <math.h>
int main()
{
	int a;
    float Xn,Xn1;
    Xn1=2;
    scanf("%d",&a);
    for(Xn=1;fabs(Xn1-Xn)>1e-5;){
    	Xn=Xn1;
		Xn1=0.5*(Xn+a/Xn);
		
		
	}
	printf("%f",Xn1);
	return 0;
}
