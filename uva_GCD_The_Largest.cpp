**** uva Problem: 12708 - GCD The Largest ****

Solving Technique:    (This problem can be solved just by looking at the output. But we must understand the problem);

    For this problem we are given an input N and expected find GCD of all pairs of numbers between 1 to N.
    If we look at the given table we can see that we can’t understand the table :).

The table shows pairs of numbers between 1 to N. The First COLUMN represents N ( the input ) and the First ROW represents
number from 1 to N-1. Why? because the first column already represents N. We can’t make pair of the same number.
This way if we draw the table for bigger number we can see an important pattern that is the biggest GCD of 1 to N is
FLOOR of N/2 ( N divided by two ).
One more thing keep an eye on the range 2 <= N <= 10^18. I didn’t look at it ( used unsigned int ) and ate a WA.

#include<stdio.h>
int main(){
    unsigned long long n,m;
    scanf("%llu", &n);
    while(n--){
        scanf("%llu", &m);
        printf("%llu\n", m>>1);
    }
    return 0;
}

**** Another One(Faster) :

#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    register unsigned int n;
    unsigned long ago;
    std::cin >> n;
    while(n--){
        std::cin >> ago;
        std::cout << (ago>>1) << "\n";
    }
    return 0;
}
