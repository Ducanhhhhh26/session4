#include<stdio.h>
int main(){
	int day;
	int month;
	int year;
	printf("Moi ban nhap ngay: ");
	scanf("%d",&day);
	printf("Moi ban nhap thang: ");
	scanf("%d",&month);
	printf("Moi ban nhap nam: ");
	scanf("%d",&year);
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		printf(" ngay %d thang %d nam %d",1<=day&&day<=31,1<=month&&month<=12,year);
	}else if(month==2){
		printf(" ngay %d thang %d nam %d",1<=day&&day<=31,1<=month&&month<=12,year);
	}else {
		printf(" ngay %d thang %d nam %d",1<=day&&day<=31,1<=month&&month<=12,year);
	}
	return 0;
}
