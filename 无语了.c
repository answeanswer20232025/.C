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
	if(result==1)printf("����X��ʤ\n");
	if(result==0)printf("����0��ʤ\n");
	if(result==-1)printf("�᲻���棬�µ�ʲô����\n");
	return 0;
}


	



