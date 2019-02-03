#include <iostream>
#include <iomanip>
using namespace std;

int DJ(int N)
{
    int a[4], temp = 0,m;
    a[0] = N%10;
    N = N/10;
    a[1] = N%10;
    N = N/10;
    a[2] = N%10;
    a[3] = N/10;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3-i; ++j)
        {
            if(a[j] > a[j+1])
          {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
          }
        }
    }
    m = a[3]*1000+a[2]*100+a[1]*10+a[0];
    return m;
}

int DZ(int N)
{
    int a[4], temp = 0, m;
    a[0] = N%10;
    N = N/10;
    a[1] = N%10;
    N = N/10;
    a[2] = N%10;
    a[3] = N/10;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3-i; ++j)
        {
            if(a[j] < a[j+1])
          {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
          }
        }
    }
    m = a[3]*1000+a[2]*100+a[1]*10+a[0];
    return m;
}
int main()
{
    int N;
    int n1,n2;
    cin>>N;
    if(N <= 0||N >= 10000)
        return 0;
    if(N%1111 == 0)
            {
                cout<<N<<" - "<<N<<" = "<<"0000"<<endl;
                return 0;
            }
    do
    {
        n1 = DJ(N);
        n2 = DZ(N);
        N = n1-n2;
        cout<<setw(4)<<setfill('0')<<n1<<" - "<<setw(4)<<setfill('0')<<n2<<" = "<<setw(4)<<setfill('0')<<N<<endl;
    }while(N != 6174);
    return 0;
}
