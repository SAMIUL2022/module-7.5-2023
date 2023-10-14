#include <stdio.h>
#include<stdlib.h>
int main ()
{
 int n;

scanf("%d",&n);
 int a[n];
long long int result=0;
for (int i = 0; i < n; i++)
{
   scanf("%d",&a[i]);
    result=result+a[i];
}
if (result>0)
{
   
  
    printf("%lld",result); 
}
else 
{
     result=result*-1;
    printf("%lld",result);
}



     
    return 0;
}