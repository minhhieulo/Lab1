 
#include <stdio.h>
int main() {
    char n;
    int a ;
    printf("nhap ky tu cua ban \n");
    scanf("%c",&n);
    printf("nhap vao so nguyen n \n");
    scanf("%d",&a);
    printf("Ky tu sau khi chuyen qua ma ASCII la %d \n",n,n);
    printf("So sau khi  chuen sang ky tu cua bang ma ASCII la %c\n",a,a);
    n = n + 1;
    a = a + 1;
    printf("Ky tu ke tiep la  la %d \n",n,n);
    printf("So ke tiep la  %c\n",a,a);
    return 0;
}