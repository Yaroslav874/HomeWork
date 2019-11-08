#include <iostream>
using std::cout;
using std::cin;

int strange_multiply(int a,int b)
{int c,m=0;
c=a;
if(a>b)
{
for(int i=0;i<b;++i)
    {
        m+=c;
    }
}
else
{
   for(int i=0;i<a;++i)
    {
        m+=c;
    }
}
return m;
}

int main()
{
int a, b;
cin>>a>>b;
b=strange_multiply(a,b);
cout<<b;
return 0;
}