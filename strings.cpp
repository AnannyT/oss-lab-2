#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s;
    for(int i =s.length()-1;i>=0;i--)
    {
        t= t + s[i];
    }
    cout<<t;
}