/*To generate the pattern of the lateral inversion of the right angled triangle having 'n' no. of rows;value of n being taken as input*/
#include<stdio.h>
void main()
{
 int i,j,n,bl;
 printf("\n Enter total rows in pattern:");scanf("%d",&n);
 for(i=0,bl=n-1;i<n;i++,bl--)
 {
  printf("\n");
  for(j=0;j<bl;j++)
  {
   printf(" ");   
  }
  for(j=0;j<=i;j++)
  {
   printf("*");   
  }
 }
} 
//output for n=5
//    *
//   **
//  ***
// ****
//*****