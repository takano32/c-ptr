#include <stdio.h>

int main(int argc, char* argv[]) {
	char* h = "Hello";
	char* c = ", ";
	char* hw = "Hello World";
	printf("%s%s%s\n", h, c, &6[hw]);
	return 0;
}


