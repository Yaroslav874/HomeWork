#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void build_ziggurat(int A[],int n)
{
    int k;
    if(n%2==1)
    {
     k=(n+1)/2;
    }
    else
    {
     k=n/2;
    }
    for(int r=0; r<k;++r)
    {
        int miN=r, maX=n-r-1;
        for(int i=miN;i<=maX;++i)
        {
          A[miN * n +i]=r+1;
          A[maX * n +i]=r+1;
          A[i * n +miN]=r+1;
          A[i * n +maX]=r+1;
        }
    }
}


int main()
{
   int n;
   cin>>n;
   int A[n][n];
   build_ziggurat(&A[0][0], n);
for(int i=0;i<n;++i)
{
   for(int j=0;j<n;++j)
   {
       cout<<A[i][j]<<" ";
   }
   cout<<endl;
}
return 0;
