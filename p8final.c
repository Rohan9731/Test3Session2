/*<br> 8. Write program to add n fractions
	<br> struct _fraction 
	<br> {
	<br>    int num,den;
	<br> };
	<br> typedef _fraction Fraction;
	<br> int find_gcd(int a, int b);
	<br> Fraction input_fraction();
	<br> void input_in_fractions(int n, Fraction f[n]);
	<br> Fraction add_fractions(Fraction f1, Fraction f2);
	<br> Fraction add_n_fractions(int n,Fraction f[n]);
	<br> void output(int n, Fraction f[n], Fraction sum);*/
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
int input_size()
{
  int n;
  printf("enter the size of array\n");
  scanf("%d",&n);
  return n;
}
frac input_fractions()
{
    frac x;
    printf("enter the num and den of fractions\n");
    scanf("%d%d", &x.num, &x.den);
    return x;
}
void input_n_fractions(int n,frac f[n])
{
for(int i=0;i<n;i++)

  f[i]=input_fractions();

}
frac add_fractions(frac a, frac b)
{
    frac sum;
    sum.den = a.den * b.den;
    sum.num = a.num * b.den + b.num * a.den;
    return sum;

}
frac add_n_fractions(int n,frac f[n])
{
  int i;
  frac temp;
  temp.num=0;
temp.den=1;
for( i=0;i<n;i++)
  temp=add_fractions(temp,f[i]);
return temp;
}
void output(int n , frac a[n] , frac add)
{
printf("the sum of given %d fractions:\n",n);
for(int i=0;i<n-1;i++){
printf("%d/%d + ",a[i].num,a[i].den);}
printf("%d/%d is %d/%d",a[n-1].num,a[n-1].den, add.num,add.den);
}

int main()
{
   int n,hcf;
   frac sum,result;
   n=input_size();
frac a[n];
input_n_fractions(n,a);
result=add_n_fractions(n,a);
hcf= gcd(result.num,result.den) ;
sum.num=result.num/hcf;
sum.den=result.den/hcf;
output(n,a,sum);
return 0;
}

