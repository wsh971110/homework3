#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	printf("所有水仙花数为:");
	for(a=100;a<1000;a++)
	{b=a/100;
	c=a/10-b*10;
	d=a%10;
	if(a=b*b*b+c*c*c+d*d*d)
	printf("%d",a);
	}
	printf("\n");
	return 0;
}
