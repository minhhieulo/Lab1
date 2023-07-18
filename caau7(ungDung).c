#include<stdio.h>
int main()
{
    int giay,phut,gio;
    printf("Nhap giay: ");
    scanf("%d",&giay);
    gio=giay/3600;
    giay=giay%3600;
    phut=giay/60;
    giay=giay%60;
    printf("Sau khi chuyen: ");
    char a[3],b[3],c[3];
    if (gio<10)
        printf("0%d:",gio);
    else
        printf("%d:",gio);
    if (phut<10)
        printf("0%d:",phut);
    else
        printf("%d:",phut);
    if (gio<10)
        printf("0%d",giay);
    else
        printf("%d",giay);
    printf("\n");
}