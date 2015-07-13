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
			/* ��1����ʾϣ����������� 
			CLOCKS_PER_SEC ��������ʾһ���ӻ��ж��ٸ�ʱ�Ӽ�ʱ��Ԫ���ֵ��win32����1000��
			��linux����1000,000������������������������ƽ̨�¶��ܹ��������У����뿼��������ء�
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