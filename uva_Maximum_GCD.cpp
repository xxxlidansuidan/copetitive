*** 11827 - Maximum GCD ***

#include <bits/stdc++.h>
using namespace std;

vector <int> vv;
string str;

void getValue() {
        int tot = 0;
        int len = str.length();
        for (int i = 0; i < len; i++) {
                if (str[i] != ' ') { tot = tot*10 + (str[i] - '0'); }

                if (str[i] == ' ' || i == len-1) { vv.push_back(tot); tot = 0; }
        }
}

int main () {
        int t;
        scanf("%d", &t);
        getline(cin, str);

        while (t--) {
                getline(cin, str);
                getValue();
                
                int result = 0;
                for (int i = 0; i < vv.size(); i++) {
                        for (int j = i+1; j < vv.size(); j++) {
                                result = max(result,  __gcd(vv[i], vv[j]));
                        }
                }
                printf("%d\n", result);
                vv.clear();
        }
        return 0;
}
