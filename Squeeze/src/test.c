
#include <stdio.h>
#include "test.h"

int main(void) {
	char s[] = "hello,world!";
	squeeze(s, 'o');
	printf("s: %s\n", s);
	printd(235);

	int data[10];
	int i;

	for(i=0; i<10; i++)
	{
		data[i] = 10-i;
	}
	qsort(data, 0, 9);
	for(i=0; i<10; i++)
		{
			printf("%d\n", data[i]);
		}
	return 0;
}
