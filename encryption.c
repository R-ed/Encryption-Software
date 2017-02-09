#include <stdio.h>
#include <string.h>

int i = 0;
char* userInput() {
	char *str = (char*) malloc(10);
	scanf("%10s", str);
	return str;
}
char* encrypt(char str) {
	for(int i = 0;;i++) {
		
	}
}
int main() {
	printf("Type your sentence: ");
	char *s = userInput();
	char *encryptedString = encrypt(s);
	printf(s);
	getch();
	return 0;
}

