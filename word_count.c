#include <stdio.h>

int main() {
	int c, count;
	for(count = 0; (c = getchar()) != EOF; count++);
	printf("%d\n", count);
	return 0;
}
