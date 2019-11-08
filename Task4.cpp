#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void big_trench(int A[], int n)
{
for (int i=0;i<n;++i)
{
    for(int j=0;j<n;++j)
    {if(i-j>0)
        A[i*n+j]=i-j;
        else
        {
        A[i*n+j]=j-i;
        }
    }
}
}

int main()
{
int n;
cin>>n;
int A[n][n];
big_trench(&A[0][0],n);
for (int i=0;i<n;++i)
{
    for(int j=0;j<n;++j)
    {
        cout<<A[i][j];
    }
    cout<< endl;
}
return 0;
}
