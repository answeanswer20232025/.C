#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include <windows.h>

#include "conio.h"
void main(){
	int a,b;
	char op;
	int i,score,h,s;
	
	for(i=0;i<10;i++){
		randomize();
		a=random(101);
		b=random(101);
		op=randon(3);
		switch(op){
			    case 0:
				printf("%d+%d=?",a,b);
				h=a+b;
				break;
				case 1:
				printf("%d-%d=?",a,b);
				h=a-b;
				break;
				case 2:
				printf("%d*%d=?",a,b);
				h=a*b;
				break;
		}
		scanf("%d",&s);
		if(h==s){
			score+=10;
		    puts("true");
		}else puts("false");
		
}
 printf("你的得分是%d",score);
}
