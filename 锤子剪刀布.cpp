#include <iostream>

using namespace std;

int main()
{
    int n;
    int a = 0, b = 0, c = 0;
    int C1 = 0, C2 = 0, B1 = 0, B2 = 0, J1 = 0, J2 = 0;
    cin>>n;
    char A[n],B[n];
    for(int i = 0; i < n; ++i)
    {
        cin>>A[i]>>B[i];
    }
    for(int i = 0; i < n; ++i)
    {
        if(A[i] == 'C'&&B[i] == 'J')
            {
                a++;
                C1++;
            }
        if(A[i] == 'C'&&B[i] == 'B')
            {
                c++;
                B2++;
            }
        if(A[i] == 'C'&&B[i] == 'C')
            b++;
        if(A[i] == 'J'&&B[i] == 'C')
            {
                c++;
                C2++;
            }
        if(A[i] == 'J'&&B[i] == 'B')
            {
                a++;
                J1++;
            }
        if(A[i] == 'J'&&B[i] == 'J')
            b++;
        if(A[i] == 'B'&&B[i] == 'B')
            b++;
        if(A[i] == 'B'&&B[i] == 'C')
            {
                a++;
                B1++;
            }
        if(A[i] == 'B'&&B[i] == 'J')
            {
                c++;
                J2++;
            }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<c<<" "<<b<<" "<<a<<endl;
    if(C1 > B1&&C1 >= J1)
        cout<<'C';
    else if(B1 >= C1&& B1 >= J1)
        cout<<'B';
    else if(J1 > B1&& J1 > C1)
        cout<<'J';
    if(C2 > B2&&C2 >= J2)
        cout<<" "<<'C';
    else if(B2 >= C2&& B2 >= J2)
        cout<<" "<<'B';
    else if(J2 > B2&& J2 > C2)
        cout<<" "<<'J';
    return 0;
}
