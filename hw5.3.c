#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int p,r,m,n,temp;
	printf("���������������� m,n");
	scanf("%d,%d",&m,&n);
	if(n<m)
	{temp=n;
	n=m;
	m=temp;
	}
	p=n*m;
	while(m!=0)
	{r=n%m;
	n=m;
	m=r;
	}
	printf("���Լ��Ϊ��%d\n",n);
	printf("��С��Լ��Ϊ��%d\n",p/n);
	return 0;
}
