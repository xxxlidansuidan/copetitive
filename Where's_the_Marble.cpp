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

/** By [Vector]:
                        vector <int>::iterator indx = lower_bound(v.begin(), v.end(), iteam);
                        int pos = indx - v.begin();
                        if (indx == v.end() || *indx != iteam) printf("%d not found\n", iteam);
                        else printf("%d found at %ld\n", iteam, pos+1);
For Using [set]: you've to just count distance, caus figur out that, other you can acces set getting error....
 	
		********auto it = distance(s.begin(), indx);
*/
