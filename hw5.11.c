#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
double zg=100,ft=zg/2;
int g;
for(g=2;g<=10;g++)
{zg=zg+2*ft;
ft=ft/2;
}
printf("��10�����ʱһ������%f��\n",zg);
printf("��10�η���%f��\n",ft);
	return 0;
}
