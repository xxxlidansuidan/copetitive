Lightoj 1178 : Problem Link: http://lightoj.com/volume_showproblem.php?problem=1178
source Link: http://sajibtalukder2k16.blogspot.com/2019/01/lightoj-1178-problem-link-area12ach-h-c.html

প্রবলেমটিতে আমাদেরকে ট্রাপেজিয়ামের চারটি বাহুর দৈর্ঘ্য দেয়া আছে। আমাদেরকে ট্রাপেজিয়ামের ক্ষেত্রফল বের করতে হবে ।
আমরা জানি ,ট্রাপেজিয়ামের ক্ষেত্রফলের সূত্র হলো =১/২ * সমান্তরাল বাহুদ্বয়ের যোগফল * সমান্তরাল বাহুদ্বয়ের মধ্যবর্তী দুরত্ব ।
অর্থাৎ area=1/2*(a*c)*h
এখানে h হলো a এবং c এর মধ্যবর্তী দুরত্ব ।
এখানে আমরা a এবং c এর মান জানি । কিন্তু h  এর মান জানি না ।তাই আমাদেরকে এখন h  এর মান বের করতে হবে ।
এখন ,আমরা C থেকে AB বরাবর লম্ব CP নিই । আর, D থেকে AB বরাবর লম্ব DQ নিই ।
এখানে , CP=DQ=h
PQ=c
 AP+BQ=a-c
AP=x
BQ=a-c-x
এখন আমরা ত্রিভুজ APC এবং BDQ তে পীথাগোরাসের উপপাদ্য প্রয়োগ করে পাই ।
ত্রিভূজ APC এ ,
AC*AC = AP*AP +h*h
or, d*d=x*x+h*h  (মান বসিয়ে)
or, h*h=d*d - x*x..........(১)

ত্রিভূজ BDQ এ,
BD*BD =  BQ*BQ +DQ*DQ
or, b*b=(a-c-x)*(a-c-x) + h*h ( মান বসিয়ে)
or ,h*h=b*b - (a-c-x)*(a-c-x) ...........(২)

সমীকরণ ১ এবং ২ হতে পাই,
d*d - x*x = b*b - (a-c-x)*(a-c-x)              [(a+b+c)*(a+b+c)=a*a+b*b+c*c+2*a*b+2*a*c+2*b*c ]

or, d*d - x*x = b*b - (a*a+c*c+x*x -2*a*c - 2*a*x+2*c*x)

or, d*d - x*x = b*b - a*a - c*c - x*x + 2*a*c + 2*a*x - 2*c*x

or, d*d = b*b - a*a - c*c  + 2*a*c + 2*a*x - 2*c*x

or, 2*a*x - 2*c*x = d*d - b*b + a*a + c*c  - 2*a*c

or, x=(d*d - b*b + a*a + c*c  - 2*a*c) / (2*a - 2*c)

এখন আমরা x পেয়ে গেলাম । আমাদেরকে এখন h বের করতে হবে ।
সমীকরণ (১) হতে পাই ,
h*h=d*d - x*x
এখন x এর মান বসিয়ে পাই ,

h*h=d*d -((d*d - b*b + a*a + c*c  - 2*a*c) / (2*a - 2*c))*(d*d - b*b + a*a + c*c  - 2*a*c) / (2*a - 2*c))

or, h=sqrt(d*d -((d*d - b*b + a*a + c*c  - 2*a*c) / (2*a - 2*c))*(d*d - b*b + a*a + c*c  - 2*a*c) / (2*a - 2*c)))
এখানে আমরা সবগুলোর মানই জানি ।
অতঃপর এই h  এর মান দিয়ে সহজেই ট্রাপেজিয়ামের ক্ষেত্রফল বের করতে পারবো ।
Source Code :

#include<bits/stdc++.h>
using namespace std;
int main() {
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++) {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double x=(d*d-b*b+a*a+c*c-2*a*c)/(2*a-2*c);
        double h=sqrt(d*d-x*x);
        double area=.5*(a+c)*h;
        printf("Case %d: %.7f\n",i,area);
    }
}
