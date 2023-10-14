#include<stdio.h>
#include<limits.h>
 
int main()
{
int n;
scanf("%d",&n);
int A [n];
 
for (int i = 0; i < n; i++)
{
   scanf("%d",&A[i]);
}
int min=INT_MAX,pos;
for (int i = 0; i < n; i++)
{
if (A[i]< min)
{
    
    min=A[i];
    pos=i+1;
}



}

 
printf("%d %d",min,pos);
 

    return 0;}