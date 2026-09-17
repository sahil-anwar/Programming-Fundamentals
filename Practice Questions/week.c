// C program to display a pattern with 5 rows and 3 columns
#include <stdio.h>
int main() {
int rows = 5;
int columns = 9;

for (int i = 1; i <= rows; ++i) {
	for (int j = 1; j <= i; ++j) {
	printf("*");
	}
	printf("\n");
}
return 0;
}