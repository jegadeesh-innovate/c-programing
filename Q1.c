#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers to find greatest num:");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("%d is the greatest number",a);
	}
	else if(b>a){
		printf("%d is the greatest number",b);
	}
	else{
		printf("both numbers are equal");
	}
	return 0;
}