#include <stdio.h>

int main() {
	char n;
	scanf("%c",&n);
	if((n>=65)&&(n<='90')||(n>=97)&&(n<=123))
	printf("The character is an alphabet\n");
	else
	printf("The character is not an alphabet\n");
	return 0;
}
