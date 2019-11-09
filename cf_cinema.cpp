https://codeforces.com/contest/349/problem/A   

     #include<iostream>
        using namespace std;
        int main() {
        	int n,x25=0,x50=0;
        	cin>>n;
        	for(int i;cin>>i;i++) {
        		i==25?x25++:(x25--,i==50?x50++:x50--);
        		if(x50<0) x50++,x25-=2;
        		if(x25<0) return cout<<"NO",0;
        	}
        	cout<<"YES";
        }  


    #include <iostream>
    using namespace std;
    int main() {
    	int n, tmp, x25 = 0, x50 = 0;
    	cin >> n;
    	for (int i = 0; i < n; i++) {
    		cin >> tmp;
    		if (tmp == 25) x25++;
    		else {if (tmp == 50) x50++, x25--; else {x25--; if (x50) x50--; else x25 -= 2;}}
    		if (x25 < 0 or x50 < 0) return cout << "NO\n", 0;
    	}
    	cout << "YES\n";
    }
