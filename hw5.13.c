#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,x1,x2;
	printf("������һ��������");
	scanf("%f",&a);
	x1=a/2;
	x2=(x1+a/x1)/2;
	do
	{x1=x2;
	x2=(x1+a/x1)/2;
	}
	while(fabs(x1-x2)>=1e-5);
	printf("%5.2f��ƽ������%8.5f\n",a,x2);
	
	 
	return 0;
}
