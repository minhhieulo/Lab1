#include<stdio.h>
#include<conio.h>
int main()
{
 float R1, R2, R3;
 printf("Nhap vao dien tro R1 = "); scanf("%f",&R1);
 printf("Nhap vao dien tro R2 = "); scanf("%f",&R2);
 printf("Nhap vao dien tro R3 = "); scanf("%f",&R3);
 printf("\n---------------------------------------");
 printf("\nKet qua:");
 float Rss=(1/R1)+(1/R2)+(1/R3);
 printf("\n\nTong tro cua mach song song la: %.2f Ohm",Rss);
 float Rnt=(R1+R2+R3);
 printf("\tTong tro cua mach noi tiep la: %.2f Ohm",Rnt);
 printf("\n\n---------------------------------------");
 printf("\n\n Nhap phim Enter de ket thuc chuong trinh nay!");
  return 0; 
}