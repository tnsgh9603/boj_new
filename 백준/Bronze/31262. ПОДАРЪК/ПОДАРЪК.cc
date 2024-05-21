#include <stdio.h>  // scanf, printf 

int main() {
	char password[7];  
	scanf("%s", password);

	int alphabet[26] = {0};
	int number[10] = {0};

	for (int idx = 0; idx < 6; ++idx) {
		char c = password[idx];

		if ('A' <= c && c <= 'Z') alphabet[c - 'A'] += 1;
		else if ('0' <= c && c <= '9') number[c - '0'] += 1;
	}

	for (int i = 1; i <= 6; ++i) {
		if (i % 2 == 1) { 
			for (int idx = 0; idx < 26; ++idx) {
				if (alphabet[idx] > 0) {
					printf("%c", 'A' + idx);
					alphabet[idx] -= 1;
					break;
				}
			}
		}
		else {
			for (int idx = 9; idx >= 0; --idx) { 
				if (number[idx] > 0) {
					printf("%c", '0' + idx);
					number[idx] -= 1;
					break;
				}
			}
		}
	}

	return 0;
}