Lightoj 1072
Problem Link: http://lightoj.com/volume_showproblem.php?problem=1072
Solution Link: http://sajibtalukder2k16.blogspot.com/2019/01/blog-post_25.html

প্রবেলমটিতে আমাদেরকে বাইরের বৃত্তের ব্যাসার্ধ এবং কতটি  বৃত্ত  আছে বাইরের বড় বৃত্তের ভিতরে সেই বৃত্তের সংখ্যা  দেয়া আছে । আমাদেরকে  ভিতরের ছোট  বৃত্তটির ব্যাসার্ধ বের করতে হবে।
আমরা জানি যে, একটি পূর্ণ বৃত্ত ৩৬০ ডিগ্রি হয়ে থাকে। 
উদাহরণ থেকেই জানা যাক,
ভিতরের ছয়টি বৃত্ত বাইরের বড় বৃত্তটিকে ৬ টি ভাগে ভাগ করেছে।  

তাহলে ভিতরের একটি বৃত্তের পরিধির সাথে বাইরের বড় বৃত্তের কেন্দ্র কত ডিগ্রী কোণ তৈরি করে??
তা হবে ৩৬০ কে n  দিয়ে ভাগ করলে যতো হয় ততো। 
আর আমরা যদি বলি  ভিতরের বৃত্তের কেন্দ্র এবং পরিধির সাথে  বাইরের বড় বৃত্তের কেন্দ্রটি কত ডিগ্রী কোণ তৈরি করে??

                                               360
                                               2*n
                                               or, 180/n
                                               or,   π/n

এখন শুধু একটি ত্রিকোণোমিতি জানলেই হবে ।
আমরা কোণ পেয়ে গেলাম , θ = π/n;
Sin θ কে লিখা যায় লম্ব / অতিভুজ হিসেবে ।
এখানে লম্ব  r, আর অতিভুজ  R-r, 
R হলো বাইরের বৃত্তের ব্যাসার্ধ আর r হলো ভিতরের বৃত্তের ব্যাসার্ধ ।

Sin θ = r/(R-r)
or, Sin(PI/n) = r/(R-r)
or,  r = sin(PI/n)*(R-r) 
or,  r= (R*sin(PI/n)) – (r*sin(PI/n))
or,  r + r*sin(PI/n)  = R*sin(PI/n)
or,  r(1+sin(PI/n)) =R*sin(PI/n)
or,  r=(R*sin(PI/n)) / (1+sin(PI/n))
তাহলে আমরা পেয়ে ভিতরের ছোট বৃত্তের ব্যাসার্ধ ।

Source Code :
#include <iostream>
#include <cmath>
const double pi  = std::atan(1)*4;

// #define pi acos(-1)
// const double pi = 2 * acos (0.0);

int main() {
        int t, cs = 0;
        scanf("%d", &t);
        while (t--) {
                double R, n;
                scanf("%lf %lf", &R, &n);
                double ans = (sin(pi/n) * R) / (sin(pi/n) + 1);
                printf("Case %d: %.8lf\n", ++cs, ans);
        }
        return 0;
}


এই প্রবলেমটির মতো একই রকম আরেকটি প্রবলেম ।
codeforces 1100 C
Problem Link :  https://codeforces.com/contest/1100/problem/C

Source Code : SourceCodeLink
