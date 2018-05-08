#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int letters=0,space=0,number=0,other=0;
	pritnf("请输入一行字符:\n");
	while((c=getchar())!='\n')
	{if(c>='a'&&c<='z'||c>='A'&&c<='Z')
	letters++;
	else if(c==' ')
	space++;
	else if(c>='0'&&c<='9')
	number++;
	else
	other++;
	}
	printf("字母数:%d\n 空格数:%d\n 数字数:%d\n 其他字符数:%d\n",letters,space,number,other);
	return 0;
}

