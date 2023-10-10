#include <stdio.h>

int main (void){
	printf("char in bytes: %lu\n", sizeof(char));
	printf("int in bytes: %lu\n", sizeof(int));
	printf("long in bytes: %lu\n", sizeof(long));
	printf("long long in bytes: %lu\n", sizeof(long long));
	printf("short im bytes: %lu\n", sizeof(short));
	printf("unsigned int in bytes: %lu\n", sizeof(unsigned int));

	return 0;
}
