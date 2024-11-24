#include<stdio.h>
int main(){
	int number1;
	int number2;
	int number3; 
	printf("Moi ban nhap so nguyen thu nhat :");
	scanf("%d",&number1);
	printf("Moi ban nhap so nguyen thu hai :");
	scanf("%d",&number2);
	printf("Moi ban nhap so nguyen thu ba :");
	scanf("%d",&number3);
	if (number3<number2&&number3>number1){
		printf("So thu ba nam giua so thu nhat va so thu hai"); 
	} else{
		printf("So thu ba khong nam giua 2 so");  
	}
    return 0;
}
	
