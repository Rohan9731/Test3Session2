
#include<stdio.h>
int input_size()
{
  int n;
  printf("Enter the number of numbers to be compared\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      printf("Enter the %d number\n",i+1);
      scanf("%d",&a[i]);
    }
}
int find_largest(int n,int a[n])
{
  int temp=0,temp1=0;
  int i;
  for(i=0;i<n;i++)
    {
      if(a[i]>temp)
      {
        temp=a[i];
        temp1=i;
      }
    }
  return temp1;
}
void output(int n, int a[n], int c)
{
  
  for(int i=0;i<n;i++)
    {
      printf("%d ",a[i]) ;
    }
  printf("\nthe index of largest number in array is  a[%d]  and the value of largest number is %d:\n",c,a[c]);
}
int main()
{
  int n;
  n=input_size();
  int a[n];
  input_array(n,a);
  int largest;
  largest=find_largest(n,a);
  output(n,a,largest);
  return 0;
}
