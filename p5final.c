#include<stdio.h>
int input_size()
{
  int n;
  printf("enter the size of the array:\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  for(i=0;i<n;i++){
    printf("enter the %dth element\n",i+1);
    scanf("%d",&a[i]);   
  }
}
int find_largest(int n, int a[n])
{int i,j,index=0,temp=0;
      for(i=1;i<n;i++)
        {
      if(a[i]>temp){
        temp=a[i];
        index=i;
          }
        }

  return index;
      
  
}
void output(int n, int a[n], int l)
{
  
  for(int i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
  printf("\nthe  largest number in array is  %d  and the index of that largest number is a[%d]:\n",a[l],l);

  
}int main()
{
  int x;
  x=input_size();
int n[x];
  input_array(x,n);
  int index=find_largest(x,n);
  output(x,n,index);
  return 0;
  }