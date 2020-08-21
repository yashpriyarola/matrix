#include<stdio.h>
int main()
{
    int m,n,y,x,*p[10][10],q;
    printf("enter the no of rows and column for matrix:",m ,n);
    scanf("%d%d",&m ,&n);
    int a[10][10],i,j;
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)  
        {
           printf("enter the values for matrix element[%d][%d]:",i, j);
           scanf("%d",&a[i][j]);
           p[i][j] = &a[i][j];
            }
        }
    printf("matrix you enter is \n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)  
        { 
            
           printf("%d\t",*p[i][j]);
           
       }
       printf("\n");
   }
  
  for(i=0;i<m;i++)
   {
  for (j=0;j<n;j++)
            {
         if(i==j) 
          {
               y=y+a[i][j];
           }
        if (i+j==2)
            {
               x=x+a[i][j];
          }}}
       
      printf("sum of the main/ principal diagonal is %d\n",y);
     printf("sum of secondary diagonal is %d",x);
   
  return 0;  
 }   
