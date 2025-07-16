#include <stdio.h>
int a=100; //Global variable

void static_disp_fn(){
    static int i=10; //Static variable
	
	printf("Value of i=%d\n",i++);
}

void main(){
	int b=13; //Local variable
	register int j; //Register Variable
	printf("Global Variable\n");
	printf("Value of a=%d\n",a);
	printf("\nLocal Variable\n");
	printf("Value of b=%d\n",b);
	
	printf("\nStatic Variable\n");
	static_disp_fn();
	static_disp_fn();
	static_disp_fn();
	
	printf("\nRegister Variable\n");
	for(j=1;j<=5;j++){
		printf("Value of j=%d\n",j);
	}
}
