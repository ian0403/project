#include <stdio.h>
size_t my_strlen(char *s)
{
	char *p = s;
	while (*p) ++p;
	return (p - s);
}
int my_int(char *s)
{
	char *p = s;
	while (*p) ++p;
	return (p - s);
}
int main(void) {
	int i;

	char *s[] = {
		"Git tutorials", "Hello World"
	};
	for (i = 0; i < 2; ++i)
		printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
	
	return 0;
}