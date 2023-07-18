#include<conio.h>
#include<stdio.h>
int main()
{
	int cd,cr;
	printf("Nhap vao  cd: ");
	scanf("%d",&cd);
	printf("Nhap vao  cr: ");
	scanf("%d",&cr);
	for(;cd<=0 || cr <= 0;)
	{
		if(cd <= 0){
			printf("Phai nhap cd > 0 \nNhap lai cd: ");
			scanf("%d",&cd);
		}
		if(cr <= 0){
			printf("Phai nhap cr > 0 \nNhap lai cr: ");
			scanf("%d",&cr);
		}
	}	

	for(int i = 1; i <= cd; i++)	{	
		for(int k = 1 ; k <= cr; k++){
			if(i == 1 || k == 1 || i == cd || k == cr){
				printf("*");
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	

}