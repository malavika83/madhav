#include<stdio.h>
int mul(int a[][2],int b[][2],int res[][2])
{
int i,j,k;
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 {
  res[i][j]=0;
   for(k=0;k<2;k++)
    {
     res[i][j]=res[i][j]+(a[i][k]*b[k][j]);
    }
  }
}
}
int main()
{
int a[2][2]={{2,3},{3,4}};
int b[2][2]={{4,5},{5,6}};
int res[2][2];
int i,j;
mul(a,b,res);
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 {
printf("%d",res[i][j]);
}
printf("\n");
}
return 0;
}
 



