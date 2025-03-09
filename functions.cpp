#include<iostream>
using namespace std;

int sum(int a,int b)// function declare
{
    int ans=a+b;
    return ans;// function define
}

int mul(int a,int b)// function declare
{
    int ans=a*b;
    return ans;// function define
}

void func()
{
    cout<< "hello";
}
bool prime(int n)
{
    if(n<2) return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=i;
    }
    return ans;
}
int main()
{
    int a,b;
    cin>> a>>b;
    cout<< sum(a,b)<<endl;// function call
    cout<< mul(a,b)<<endl;
    func();
    cout<<endl;
    cout<< prime(a)<<endl;
    cout<< fact(a)<<endl;
    cout<< fact(b)<<endl;
    return 0;
}
