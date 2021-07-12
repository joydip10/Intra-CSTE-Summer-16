#include<iostream>
using namespace std;
long long int c = 0;
int main()
{
    int test;
    int N;
    cin>>test;
    long long int arr[60];
    arr[1] = 3;
    for(int i = 2;i<100;i++)
    {
        arr[i]=(2*(arr[i-1]))+2;
    }
    for(int t = 1;t<=test;t++){
    cin>>N;
    for(int i = 1;i<=N;i++)
    {
        long long int num = arr[i];
        while(num!= 0)
        {
            if(num%10 == 8)
            {
                c++;
            }
            num = num/10;
        }
    }
    cout<<"Case "<<t<<": "<<c<<endl;
    c=0;
    }
    return 0;
}
