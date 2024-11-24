#include<stdio.h>
int main(){
	int number;
	printf("Moi ban nhap mot so nguyen:");
	scanf("%d",&number);
	if(number<0){
		printf("%d la so nguyen am",number); 
	}else{
		printf("%d la so nguyen duong",number); 
	}  
		return 0; 
} 

 
