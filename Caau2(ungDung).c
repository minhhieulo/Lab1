#include<stdio.h>
int main(){
	
	float x1,x2,y1,y2,Hs,Kc;
	printf("Nhap Vao He So x,y");
	scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	Hs= (y2-y1)/(x2-x1);
	printf("He So Cua Toa Do La %f \n",Hs);
	Kc = sqrt(pow(2,y2-y1)+ pow(2,x2-x1));
	printf("khoang cach cua toa do la %f \n",Kc);
	return 0;
}