#include <stdio.h>
#include <math.h>
int main()
{
 int r,s ,v ;
 const float PI = 3.14;
 printf( "Nhap vao ban kinh hinh cau : " );
 scanf( "%d", &r );
 s = 4*PI*r*r;
 printf("Dien tich Hinh Cau La %d\n",s);
 v= (4/3)*PI*r*r*r;
 printf( "The tich V = %d\n",v);
 return 0;
}