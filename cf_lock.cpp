#include <iostream>
using namespace std;
int n,s,i;string a,b;
int main() {
cin>>n>>a>>b;
for (;i<n;i++) s += min((a[i]-b[i]+10)%10,(b[i]-a[i]+10)%10);
cout<<s;
}


#include <bits/stdc++.h>
using namespace std;
int main() {
int a,p=0,c;
cin>>a;
char l[a],q[a];cin>>l>>q;
for(int i=0;i<a;i++){ c=abs(l[i]-q[i]); p+=(c<5?c:5-c%5);}
cout<<p;
}
