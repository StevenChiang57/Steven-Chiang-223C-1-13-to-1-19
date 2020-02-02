#include <stdio.h>
#include <string.h>

#define maxcharactercount 200
#define thealphabet 26
int main() {
	int c, words[maxcharactercount], len = 0;

	for (int i = 0; i < maxcharactercount; ++i)
		words[i] = 0;
	printf("it wont count symbols, only a-z (capitalize is allowed but Aa = 2)\n");
	while ((c = getchar()) != EOF) {
		if (tolower(c) >= 'a' && tolower(c) <= 'z') {
			++words[c - 'a'];
		}
	}
	for (int i = 0; i < thealphabet; i++) {
		printf("%3c: ", i + 'a');
		for (int j = 0; j < words[i]; j++)
			printf("*");

		printf("\n");
	}


	return 0;
}
