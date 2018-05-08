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
printf("第10次落地时一共经过%f米\n",zg);
printf("第10次反弹%f米\n",ft);
	return 0;
}
