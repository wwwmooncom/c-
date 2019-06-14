#include <stdio.h>

int main() {
	int farh, centi;
	farh = 0;
	while(farh<=300) {
		centi = 5 * (farh - 32) / 9;
		printf("%d\t%d\n", farh, centi);
		farh += 20;
	}
	return 0;
}
