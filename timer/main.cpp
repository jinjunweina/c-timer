#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void)
{
	time_t c_start, c_end;
	c_start = clock();
	while (true)
	{
		c_end = clock();
		if (difftime(c_end, c_start) >= 1 * CLOCKS_PER_SEC) 
			/* “1”表示希望间隔的秒数 
			CLOCKS_PER_SEC 它用来表示一秒钟会有多少个时钟计时单元这个值在win32下是1000，
			在linux下是1000,000所以如果想让这个程序在两个平台下都能够正常运行，必须考虑这个因素。
			*/
		{
			printf("The pause used %f s by clock()./n", difftime(c_end, c_start) / CLOCKS_PER_SEC);
			c_start = clock();
		}
	}
	printf("The program has completed.");
	system("pause");
	return 0;
}