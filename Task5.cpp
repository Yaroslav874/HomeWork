#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void put_snake(int A[], int column, int line)
{
    int k,y=0;
   if(line%2==1)
    {
     k=(line+1)/2;
   }
    else
    {
     k=line/2;
    }

    for(int round=0; round<k;++round)
    {
        int minimum=round, maxline=line-round-1, Maxcolumn=column-round-1;
        for(int i=Maxcolumn;i>=minimum;--i)
        {y++;
          A[minimum*column+i]=y;

        }

        if((line%2==0)  || (line%2==1 && (round!=k-1 )) && (line>1))
        {
        for(int i=minimum+1;i<=maxline;++i)
        {++y;
          A[i*column+minimum]=y;

        }

        for(int i=minimum+1;i<=Maxcolumn;++i)
        {++y;
          A[maxline*column+i]=y;

        }

        if(y!=line*column)
        {

            for(int i=maxline-1;i>minimum;--i)
            {
                ++y;
                A[i*column+Maxcolumn]=y;

            }

        }
        }
    }


    }



int main()
{
   int line,column;
   cin>>column>>line;
   int A[line][column];
   put_snake(&A[0][0],column, line);
for(int i=0;i<line;++i)
{
   for(int j=0;j<column;++j)
   {
       cout<<A[i][j]<<" ";
   }
   cout<<endl;
}
return 0;
}
