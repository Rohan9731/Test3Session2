#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction fraction;

  int gcd(int a,int b)
  {
    int t;
    while (b!=0)
      {
        t = b;
        b = a%b;
        a = t;
      }
    return a;
  }
fraction input_fraction()
{
    fraction k;
  printf("Enter the numerator and denominator\n");
  scanf("%d%d",&k.num,&k.den);
  return k;
}
fraction add_fraction(fraction a,fraction b)
{
  fraction sum;
  sum.num=a.num*b.den + b.num*a.den;
  sum.den= a.den*b.den;
  int g=gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den= sum.den/g;
  return sum;
}
void output(fraction a,fraction b,fraction sum)
{
  printf ("the sum of two fractions %d/%d and %d/%d is %d/%d\n",a.num,a.den,b.num,b.den,sum.num,sum.den);
}

int main()
{
  fraction a,b,c;
  a=input_fraction();
  b=input_fraction();
  c=add_fraction(a,b);
  output(a,b,c);
  return 0;
  }

  