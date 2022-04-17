/*<br> 7. Write a program to add two fractions.
    <br> struct _fraction
    <br> {
    <br>    int num,den;
    <br> };
    <br> typedef _fraction Fraction;
    <br> int find_gcd(int a, int b);
    <br> Fraction input_fraction();
    <br> Fraction add_fractions(Fraction f1, Fraction f2)
    <br> void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)*/
#include <stdio.h>
struct fractions
{
    int num, den;
};
typedef struct fractions frac;
int gcd(int a, int b)
{
    int n, i;
    if (a < b)
        n = a;
    else
        n = b;
    for (i = n; i > 0; i--)
        if (a % i == 0 && b % i == 0)
            return i;
}
frac input()
{
    frac x;
    printf("enter the num and den of fractions\n");
    scanf("%d%d", &x.num, &x.den);
    return x;
}
frac add_fractions(frac a, frac b)
{
    frac sum;
    sum.den = a.den * b.den;
    sum.num = a.num * b.den + b.num * a.den;
    int hcf = gcd( sum.num , sum.den );
    sum.den /= hcf;
    sum.num /= hcf;
    return sum;

}
void output(frac a,frac b,frac add)

{
printf("the sum of two fractions %d/%d and %d/%d is %d/%d\n",a.num,a.den,b.num,b.den,add.num,add.den);
}

int main()
{
    frac x,y,add;
x=input();
y=input();
add= add_fractions(x,y);
output(x,y,add);
return 0;
}

