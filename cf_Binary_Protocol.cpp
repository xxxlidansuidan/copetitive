825A. Binary Protocol Codeforces Problem Solution & Logic
http://codeforces.com/problemset/problem/825/A

খুব সহজ একটা সমস্যা, তোমায় --- একটা স্ট্রিং দেয়া থাকবে, সেই স্ট্রিং'টি শুধুমাত্র ১ / ০ দিয়ে গঠিত| তোমায়, পুরো স্ট্রিং এর ক্যারেক্টার চেক করতে হবে, সাথে সাথে মোট ১ এর 
সংখ্যা গণনা করতে হবে ও যখনই ০ আসবে, তখনই কয়টা ১ পেয়েছো, এ অবদি, সেটা প্রিন্ট করতে হবে। তারপর, আবার ১ নতুন করে কাউন্ট করবা, আর ০ পাইলে - সেটাআবার প্রিন্ট
করতে হবে। এভাবেই তোমায় পুরো কোড ইমপ্লিমেন্ট করতে হবে। চলো ,কোড দেখি এইবার -------

#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.sync_with_stdio(false);
    string str;
    int n;
    int num;
    while (cin >> n) {
        cin >> str;
        num = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == '1') {
                num++;
            }
            else {
                cout << num;
                num = 0;
            }
        }
        cout << num << endl;
    }
    return 0;
}
