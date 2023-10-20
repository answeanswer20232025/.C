#include <stdio.h>

int main()
{
	const int size=3;
	int board[size][size];
	int numofo;
	int numofx;
	int result=-1;
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);
	}
	}
	for(i=0;i<size&&result==-1;i++){
		numofo=0,numofx=0;
		for(j=0;j<size;j++){
			 
		if(board[i][j]==1){
			numofx++;
		}else numofo++;
}

	if(numofx==size){
		result=1;
	}else if(numofo==size) result=0; 
}
if(result==-1){
	for(j=0;j<size&&result==-1;j++){
	numofo=0,numofx=0;
		for(i=0;i<size;i++){
				if(board[i][j]==1){
			numofx++;
		}else numofo++;
}if(numofx==size){
		result=1;
	}else if(numofo==size) result=0; 
		}
	}
		
	
		if(result==-1){
		numofo=0,numofx=0;
		for(i=0;i<size;i++){
			 
		if(board[i][i]==1){
			numofx++;
		}else numofo++;
}
}
	if(numofx==size){
		result=1;
	}else if(numofo==size) result=0; 

if(result==-1){
	numofo=0,numofx=0;
		for(i=0;i<size;i++){
				if(board[i][size-i+1]=1){
			numofx++;
		}else numofo++;
}
		
	}
		if(numofx==size){
		result=1;
	}else if(numofo==size) result=0; 
	if(result==1)printf("本轮X获胜\n");
	if(result==0)printf("本轮0获胜\n");
	if(result==-1)printf("会不会玩，下的什么蓝旗\n");
	return 0;
}


	



