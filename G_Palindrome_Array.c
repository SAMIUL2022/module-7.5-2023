#include <stdio.h>
int main ()
{
int n;
scanf("%d",&n);
int A[n];
 
for (int i = 0; i < n; i++)
{
   scanf("%d",&A[i]);
}
 int x=1;
for (int i = 0; i <n; i++)
{
  
  if (A[i]!=A[n-1-i])
  {
    x=0;
    break;
  }
  
  }
 if (x)
  {
    printf("YES");
    
  }
  else
    {printf("NO");
    }
 
     
    return 0;}