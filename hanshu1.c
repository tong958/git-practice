#include<stdio.h>
int r(int n){
	int s=0;
	while(n>0){
		s=s*10+n%10;
		n/=10;
	}
	return s;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",r(n));
	return 0;
}
