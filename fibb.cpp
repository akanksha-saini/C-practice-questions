#include<iostream>
using namespace std;
int fibb(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int ans1=fibb(n-1);
    int ans2=fibb(n-2);
    int ans=ans1+ans2;
    return ans;
    }
    int main()
    {
        int s;
        cout<<"Enter the value of s"<<endl;
        cin>>s;
        cout<<fibb(s);
    }
