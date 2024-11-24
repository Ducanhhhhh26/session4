#include<stdio.h>
int main(){
	int wDauthang;
	int wCuoithang;
	int soW; 
	printf("Moi ban nhap vao cong to dien dau thang: ");
	scanf("%d",&wDauthang);
	printf("Moi ban nhap vao cong to dien cuoi  thang: ");
	scanf("%d",&wCuoithang);
	soW = wCuoithang - wDauthang;
	if (soW>=0&&soW<50){
		soW = soW * 10000; 
		printf("Tien dien thang nay la %d",soW); 
	}else if(soW>=50&&soW<100){
		soW = soW * 15000; 
		printf("Tien dien thang nay la %d",soW); 
	}else if(soW>=100&&soW<150){
		soW = soW * 20000;
		printf("Tien dien thang nay la %d",soW); 
	}else if(soW>=150&&soW<200){
		soW = soW * 25000;
		printf("Tien dien thang nay la %d",soW); 
	}else{
		soW = soW * 30000;
		printf("Tien dien thang nay la %d",soW);  
	}
	return 0; 
	 
	 
} 
