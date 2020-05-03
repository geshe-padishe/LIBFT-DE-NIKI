#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>

int main(int argc, char **argv)
{
	int size = 0;
	int size2 = 0;
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	char str[25] = "qqwweerrtt";
	char str2[20] = "aazzuubbxx\0ooooo";
	char str1[25] = "qqwweerrtt";
	char str3[20] = "aazzuubbxx\0ooooo";
	char *ptr = &str[i];
	char *ptr2 = &str2[j];
	char *ptr1 = &str1[i];
	char *ptr3 = &str3[j];

	size = strlcat(ptr, ptr2, atoi(argv[3]));
	size = strlcat(ptr1, ptr3, atoi(argv[3]));
	printf("first char is %c\n", *ptr2);
	printf("first char is %c\n", *ptr3);
	printf("%s and size was %d\n", str, size);
	printf("%s and size was %d\n", str1, size);

}
