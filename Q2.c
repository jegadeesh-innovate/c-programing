#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers to find smallest num:");
	scanf("%d%d",&a,&b);
	if(a<b){
		printf("%d is the smallest number",a);
	}
	else if(b<a){
		printf("%d is the smallest number",b);
	}
	else{
		printf("both numbers are equal");
	}
	return 0;
}