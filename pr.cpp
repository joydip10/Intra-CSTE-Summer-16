#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i =1;i<=test;i++)
    {
        int N;
        cin>>N;
        cout<<"Case "<<i<<": "<<(N-1)<<endl;
    }
    return 0;
}
