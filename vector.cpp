#include <iostream>
#include <cmath>
int main() {
	double p, n;
	for (int i = 1; scanf("%lf", &n) && n; ++i) {
		p = ceil((3 + sqrt(9 + 8 * n)) / 2);	
		printf("Case %d: %.0lf\n",i,p);
	}
}
