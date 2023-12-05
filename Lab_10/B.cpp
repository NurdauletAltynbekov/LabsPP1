#include <bits/stdc++.h>

using namespace std;
int v = 0;
long long funcPow(){
    long long num = 1;
    for (int i = 0; i < v; i++)
    {
        num*=v;
    }
    v++;
    return num;
}

int main (){
    int n;
    cin>>n;
    vector<long long> s(n+1);
    generate(s.begin(), s.end(), funcPow);
    for (int i = 0; i <=n; i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
    
}