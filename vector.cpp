#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll calc (double n, double k) {
	double root1 = (-3*k + sqrt(12*n/k - 3*k*k))/6;
	double root2 = (-3*k - sqrt(12*n/k - 3*k*k))/6;
	if (root1 >= 0) return (ll)root1;
	return (ll)root2;
}
int main () {
	ll n;
	while (scanf("%lld", &n) && (n != 0)) {
		ll i, j;
		i = (ll) ceil(pow(n, 1/3.0))+1;
		bool stat = false;
		for (j = 1; j <= i; j++) {
			ll y = calc((double)n, (double)j);
			ll x = j+y;
			if (x >= 0 && y >= 0 && x*x*x - y*y*y == n) {
				printf("%lld %lld\n", x, y);
				stat = true;
				break;
			}
		}
		if (!stat) printf("No solution\n");
	}
	return 0;
}
