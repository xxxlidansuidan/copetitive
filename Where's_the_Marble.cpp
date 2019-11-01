****/ UVA-10474 - Where is the Marble? **/

#include <iostream>
#include <algorithm>
using namespace std;
const size_t MAX{10005};
int np[MAX], iteam;
int main() {
	int n, q, cs = 0;
	while (scanf("%d %d", &n, &q) == 2 && (n||q)) {
		for (int i{0}; i < n; ++i) scanf("%d", &np[i]);
		sort(np, np + n);
		printf("CASE# %d:\n", ++cs);
		while (q--) {
			scanf("%d", &iteam);
			auto iter = lower_bound(np, np + n, iteam);
			if (iter == np + n || *iter != iteam) printf("%d not found\n", iteam);
			else cout << iteam << " found at " << (iter - np) + 1 << '\n';
		}
	}
	return 0;
}
