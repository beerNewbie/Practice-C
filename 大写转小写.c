//大写转小写程序
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int ch = 0;
	again:

	while((ch = getchar()) != EOF)
	{
		if('A' <= ch && ch <= 'Z')
		{
			printf("小写为：%c", ch + 32);
		}
		else if('a' <= ch && ch <= 'z')
		{
			printf("大写为：%c", ch - 32);
		}
		else
			goto again;
	}
	return 0;
}
