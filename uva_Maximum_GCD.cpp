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

Or==============================================================================>>

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int gcd(int a, int b){
	if(a%b==0) return b;
	return gcd(b,a%b);
}

int main(){
	int T,N,a[99],ans;
	string s;
	
	cin>>T;
	getline(cin,s);
	
	while(T--){
		getline(cin,s);
		istringstream is(s);
		N = 0;
		
		while(is>>a[N]) ++N;
		
		ans = 0;
		
		for(int i = 0;i<N;++i)
			for(int j = i+1;j<N;++j)
				ans = max(ans,gcd(a[i],a[j]));
		
		cout<<ans<<endl;
	}
	
	return 0;
}
