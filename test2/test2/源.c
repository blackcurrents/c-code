#include<stdio.h>
#include<math.h>

int main()
{
    int n = 0, i = 0 , z=0 ;
    double sum = 0;
    printf("Enter n :");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++) {
        z = pow(-1, i);
        sum = sum + 1.0 / (3 * i + 1)*z;
    }
    printf("%.3f", sum);
    return 0;
}