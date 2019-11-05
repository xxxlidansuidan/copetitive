https://codeforces.com/contest/855/problem/A

#include <iostream>
#include <map>
using namespace std;
int main() {
        int n;
        cin >> n;
        map <string, int> mp;
        for (int i = 0; i < n; i++) {
                string s;
                cin >> s;
                if (mp[s] != 0) {
                       cout << "YES\n";
                } else cout << "NO\n";
                mp[s]++;
        }
        return 0;
}

*********************/ OR...................

int main() {
    int n,i,j;
    string s[102];
    sd(n);
    for(i=0;i<n;i++) {
    	cin>>s[i];
    	for(j=0;j<i;j++) {
    		if(s[i]==s[j])	break;
      }
    	if(j==i)	printf("NO\n");
    	else	printf("YES\n");
    }
    return 0;
}
