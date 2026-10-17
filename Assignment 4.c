
#include <stdio.h>

int main() {
    double principal, time, rate, interest;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter time: ");
    scanf("%lf", &time);

    printf("Enter rate: ");
    scanf("%lf", &rate);

    interest = (principal * time * rate) / 100;

    printf("Simple Interest = %.2lf\n", interest);

    return 0;
}
