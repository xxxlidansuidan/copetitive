*** uva 10347 - Medians ***
Very Easy Problem -----
When Three Medians( মধ্যমা ) Are Given , Then Using Heron's Formula , We can solve the area : 
				
				Area = (4.0/3.0) * sqrt(s*(s-m1)*(s-m2)*(s-m3));	where , s = (m1+m2+m3) / 2;


#include <iostream>
#include <cmath>
int main () {
	double m1, m2, m3, s, area;
	while (scanf("%lf %lf %lf", &m1, &m2, &m3) != EOF) {
		s = (m1+m2+m3)/2;
		area = (4.0/3.0) * sqrt(s*(s-m1)*(s-m2)*(s-m3));
		if (area > 0.0) printf("%0.3lf\n", area);
		else printf("-1.000\n");

	}
	return 0;
}
