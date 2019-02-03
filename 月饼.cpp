#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    int N,D,max = 0;
    cin>>N>>D;
    double a[N],b[N],ave[N];
    double sum = 0.0;
    for(int i = 0; i < N; ++i)
    {
        cin>>a[i];
    }
    for(int i = 0; i < N; ++i)
    {
        cin>>b[i];
    }
   // for(int i = 0; i < N; ++i)
   // {
    //    ave[i] = b[i]/a[i];
    //}
    while(D>0)
    {
        for(int i = 0; i < N; ++i)
        {
            if(b[i]/a[i] > b[max]/a[max])
                max = i;
        }
        if(D>=a[max])
        {
            D = D - a[max];
            sum = sum + b[max];
            b[max] = 0;
        }
        else
        {
            sum += b[max]/a[max]*D;
            D = 0;
        }
    }
    cout<<setprecision(2)<<fixed<<sum<<endl;
    return 0;
}
