#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int delete_duplicates(int n, int A[], int B[])
{
    bool b = false;
    int l=1;
    B[0]=A[0];
    for(int i=1;i<n;++i)
    {
        for(int j=0; j<l; ++j)
        {
            if(B[j]==A[i])
            {
                b=true;
            }
        }
        if(b==false)
        {
            B[l]=A[i];
            l++;
        }
        b=false;
    }
    return l;
}
int main()
{
int n, i,k;
cin >> n;
int A[n], B[n];
for(i=0;i<n;++i)
    {
        cin>>A[i];
    }
k=delete_duplicates(n,A,B);
for(i=0;i<k;++i)
    {
        cout<<B[i]<<" ";
    }
return 0;
}