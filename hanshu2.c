#include<stdio.h>
void f(){
	printf("================\n");
	return;
}
void g(){
	printf("This is a line.\n");
	return;
}
int main(){
	f();
	f();
	g();
	f();
	f();
	return 0;
}
