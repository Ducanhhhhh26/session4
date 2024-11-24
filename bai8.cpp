#include<stdio.h>
int main(){
	int edge1;
	int edge2;
	int edge3;
	printf("Moi ban nhap canh thu nhat cua tam giac: ");
	scanf("%d",&edge1);
	printf("Moi ban nhap canh thu hai cua tam giac: ");
	scanf("%d",&edge2);
	printf("Moi ban nhap canh thu ba cua tam giac: ");
	scanf("%d",&edge3);
	if(edge1<edge2 + edge3&&edge2<edge1 + edge3&&edge3<edge1+edge2){
		printf("day la 3 canh cua hinh tam giac\n"); 
	}else {
		printf("day khong phai la 3 canh cua tam giac\n"); 
	}
	 return 0; 
} 
