
#include<stdio.h>
int input_n_and_r(int *n, int *r)
{
  printf("enter the value of n and r\n");
  scanf("%d %d",n,r); 
}
int calculate(int n, int r)
{int i,result,sum0=1,sum1=1,sum2=1;
  if(r>n)
  {
    return 0;
  }
  else
 
  for(i=n;i>0;i--)
    {
     //int sum0=1;
      sum0=sum0 * i;
    }
  //return sum0;
  int x= n-r;
  for(i=x;i>0;i--)
    {
      //int sum1=1;
      sum1= sum1 * i;
    }
  for (i=r;i>0;i--)
    {
      //int sum2=1;
      sum2= sum2 * i;
    }

  result=sum0/(sum1 * sum2);
  return result;
}

void output(int n, int r, int result)
{
  printf("the value of given combination of n=%d and r=%d is %d\n ",n,r,result);
  
}
int main()
{int a,y,res;
input_n_and_r(&a,&y);
 res = calculate(a,y);
  output(a,y,res);
  return 0;
  
}
