#include<stdio.h>
int main(){
	int number;
	printf("Moi ban nhap mot so nguyen:");
	scanf("%d",&number);
	if(number%3==0&&number%5==0){
		printf("%d chia het cho ca 3 va 5",number); 
	}else if(number%3==0){
		printf("%d chia het cho 3",number);
	}else if(number%5==0){
		printf("%d chia het cho 5",number);
	}else{
		printf("%d khong chia het cho 5 va 3",number);
	}
	return 0;
}
