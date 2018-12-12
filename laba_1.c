#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
float fl;
double db;

float a = 100, b = 0.001;

fl = (pow(a + b, 4) - (pow(a, 4) + 4 * pow(a, 3) * b)) 
     / (6 * pow(a, 2) * pow(b, 2) + 4 * a * pow(b, 3) + pow(b, 4));
     
db = (pow(a + b, 4) - (pow(a, 4) + 4 * pow(a, 3) * b)) 
     / (6 * pow(a, 2) * pow(b, 2) + 4 * a * pow(b, 3) + pow(b, 4));

printf("%4.50f\n%4.50lf\n", fl, db);


int n,m;
printf("Enter m and n\n");
scanf("%d\n%d", &m, &n);
printf("m-++n = %d;\n", m-++n);
if (++m > -n) printf("++m>-n = true\n"); else printf("++m>-n = false\n");
if (--n < ++m) printf("--n<++m = true\n"); else printf("--n<++m = false\n");

return 0;
}
