#include<stdio.h>
#include<Math.h>
int main(){
	int r , cv ,dt;
	const float PI = 3.14;
	printf("Nhap Vao Ban Kinh Hnh Tron: \n");
	scanf("%d",&r);
	cv = (PI*2)*r;
	dt = PI*r*r;
	printf("chu vi hinh tron la : %d \n",cv);
	printf("dien tich hinh tron la: %d \n",dt);
	return 0;			
}