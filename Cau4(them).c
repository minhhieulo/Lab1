#include<stdio.h>
int main(){
	
	int N , sum ,a,b  ;
	do{
	printf("Nhap Vao 2 So Nguyen Duong N: ");
	scanf("%d",&N);
	} while(N<10);
    a = N / 10; 
    b = N % 10; 
    sum = a + b; 
	printf("Tong cua N la : %d \n",sum);
	return 0;
}