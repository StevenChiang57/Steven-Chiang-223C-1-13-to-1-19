#include <stdio.h>
#define maxwords 30
#define IN 1 // inside a word
#define OUT 0
int main(int argc, const char * argv[]) {
	int c, words[maxwords], len = 0;

	for (int i = 0; i < maxwords; ++i)
		words[i] = 0;

	while ((c = getchar()) != EOF) {
		++len;
		if (c == ' ' || c == '\n' || c == '\t') {
			++words[len];
			len = 0;
		}
	}

	for (int u = 1; u < maxwords; ++u) {
		printf("%3d: ", u - 1);
		for (int j = 0; j < words[u]; ++j)
			printf("*");
		printf("\n");
	}

	return 0;
}
