#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */
void reverse(char string[]);
int getline(char line[], int maxline);
/* print the longest input line */

int main(void) {
	char line[MAXLINE]; /* current input line */
	while (getline(line, MAXLINE)) {
		reverse(line);
		printf("%s\n", line);
	}
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void reverse(char s[]) {
	int length = strlen(s);
	for (int i = 0; i < length / 2; i++) {
		char temp;
		int temp2 = length - 1 - i;
		temp = s[i];
		s[i] = s[temp2];
		s[temp2] = temp;
	}
}