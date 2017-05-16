// This is my solution to the problem available here: https://www.hackerrank.com/challenges/staircase

# include <stdio.h>

int main(void) {
	int n;
	int i;
	int j = 0;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		while(j < n - i) {
			putchar(' ');
			j++;
		}
		j = 0;
		while(j < i) {
			putchar('#');
			j++;
		}
		putchar('\n');
		j = 0;
	}

	return 0;
}
