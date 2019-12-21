#include <iostream>
#include <cmath>
int main() {
	int n, a, sum = 0;
	while (scanf("%d %d", &n, &a)==2) {
		for (int i = 1; i <= n; i++) sum = sum+(i * pow(a, i));
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
