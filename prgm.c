
#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter the two elements:");
  scanf("%d\t%d",&a,&b);
  a^=b;
  b^=a;
  a^=b;
  printf("After swapping %d %d",a,b);
 
}
