#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
if(n==0)
{
    printf("\nThe number is zero");
}
else if(n>0)
{
  printf("\nThe number is positive");
}
else
{
  printf("\nThe number is negative");
}
return 0;
}
