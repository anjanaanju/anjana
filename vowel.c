#include <stdio.h>

int main() {
	char n;
	scanf("%c",&n);
	if((n=='a')||(n=='A')||(n=='e')||(n=='E')||(n=='i')||(n=='I')||(n=='o')||(n=='O')||(n=='u')||(n=='U'))
	printf("The character is vowel\n");
	else
	printf("The character is a consonant \n");
	return 0;
}
