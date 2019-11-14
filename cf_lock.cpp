/*https://codeforces.com/contest/540/problem/A

here: min((a[i]-b[i]+10)%10,(b[i]-a[i]+10)%10) is the main logic you know :)
// (a[i] - b[i] + 10) % 10 is meaning moving on accenfing form(0 to 9)
// (b[i] - a[i] + 10) % 10 is meaning moving on decending form(9 to 0)
Examples;
Input:
5
82195
64723
output: 
12
here // at position 3, we have (1--->7) {1-7=-6+10=4%10=4 AND 7-1=6+10=16%10=6} so the minimum vakue 4 is taken...
*/

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
