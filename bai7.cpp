#include<stdio.h>
int main(){
	int year;
	printf("Moi ban nhap so nam vao: ");
	scanf("%d",&year);
	if(year%4==0&&year%100!=100||year%400==0){
		printf("Nam %d la nam nhuan",year);
	}else{
		printf("Nam %d la nam binh thuong",year); 
	} 
	return 0; 
	 
}
