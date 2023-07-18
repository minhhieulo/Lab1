#include<stdio.h>
int main(){
    int a,b;
    printf("nhap vao hai so nguyen a,b:  ");
    scanf("%d%d",&a,&b);
    if(a>b){
	   printf("a la Max b la Min \n");
    }else{
    	
    	printf("b la Max a la Min \n ");
    }
    return 0;
}
