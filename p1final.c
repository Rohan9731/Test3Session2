#include<stdio.h>

void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter the first numerator and denominator\n");
  scanf("%d %d",num1,den1);
  printf("enter the second numerator and denominator\n");
  scanf("%d %d",num2,den2);
}
int add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{ int i,n;
  if(den1==den2)
  {
    *den3=den1;
    *num3=num1+num2;
  }
  else
  { 
   *den3=den1*den2;
   *num3=num1*den2+num2*den1;
  }
      if(*den3 < *num3)
          n=*den3;
          else
          n=*num3;
     
         for(i=n;i>0;i--)
        {
         if(*num3%i==0 && *den3%i==0)
          {
          *den3=*den3/i;
          *num3=*num3/i;
          }
        }
  
}
void output(int num1, int den1, int num2, int den2, int num3, int den3 )
{
  printf("the sum of two fraction %d/%d and %d/%d is %d/%d\n",num1,den1,num2,den2,num3,den3);
}
int main()
{
 int a,b,c,x,y,z;
  input(&a,&b,&x,&y);
  add(a,b,x,y,&c,&z);
output(a,b,x,y,c,z);
  return 0;
  }