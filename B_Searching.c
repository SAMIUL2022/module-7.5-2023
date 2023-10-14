#include <stdio.h>
int main ()
{
int n;
scanf("%d",&n);
int a [n];
int x;
int sum=0;
int count=0;
 
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}

scanf("%d",&x);
for (int i = 0; i <n; i++)
{
   if (a[i]==x)
    {
        sum=i;
        count++;
        break;
}}

 if (count==0)
 {
    printf("-1");
 }
 else
 {printf("%d",sum);}
   
     
    return 0;
}