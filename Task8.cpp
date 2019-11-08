#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int gcd(int a, int  b)
{
    while(b!=0)
    {
        int c=a%b;
        a=b;
        b=c;
    }
    return a;
}
int reduce(int a, int b)
{
int c=gcd(a,b);
a/=c;
b/=c;

return b;
}

int proper_fraction(int denominator)
{
    int sum=0,k;
    for(int i=1;i<denominator;i++)
    {

        k=reduce(i,denominator);

        if(k==denominator)
            ++sum;

    }
    return 2*sum;
}


int main()
{
    int r,k;
    cin>>r;
    k=proper_fraction(r);

    cout<<k;
return 0;
}