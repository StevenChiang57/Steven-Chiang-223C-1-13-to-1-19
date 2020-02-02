#include <stdio.h>
#include <string.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);
/* print the longest input line */

int main(void) {
	int len; /* current line length */
	char line[MAXLINE]; /* current input line */
	while ((len = getline(line, MAXLINE)) > 0) {
		for (int i = len - 1; line[i] == ' ' || line[i] == '\t' || line[i] == '\n'; i--) {
			line[i] = '\0';
		}
		printf("%s\n", line); //this is nearly impossible to truely test for me (to my knowledge) because a string with or without trailing spaces or tabs looks the same in the compiler.
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}