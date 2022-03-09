#include <stdio.h>

typedef struct _fraction
{
int num,den;
}Fraction;

Fraction input_fraction()
{
  Fraction k;
  printf("Enter the numerator and denominator\n");
  scanf("%d%d",&k.num,&k.den);
  return k;
}

Fraction smallest_fraction(Fraction f1,Fraction f2, Fraction f3)
{
  Fraction s;
  if((f1.num/f1.den < f2.num/f2.den) && (f1.num/f1.den < f3.num/f3.den))
  {
    s.num=f1.num;
    s.den=f1.den;
  }
  else 
    if((f2.num/f2.den) < (f3.num/f3.den))
  {
    s.num=f2.num;
    s.den=f2.den;
  }
  else
  {
    s.num=f3.num;
    s.den=f3.den;
  }
  return s;  
}

void output(Fraction f1,Fraction f2,Fraction f3,Fraction l)
{
  printf("Smallest fraction among %d/%d ,%d/%d and %d/%d is %d/%d\n",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,l.num,l.den);
}
int main()
{
  Fraction a,b,c,s;
  a=input_fraction();
  b=input_fraction();
  c=input_fraction();
  s=smallest_fraction(a,b,c);
  output(a,b,c,s);
  return 0;
}
