#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	double x,s;
	x=(a+b+c)/2;
	s=sqrt(x*(x-a)*(x-b)*(x-c));
	printf("%.6f",s);
	return 0;
}
