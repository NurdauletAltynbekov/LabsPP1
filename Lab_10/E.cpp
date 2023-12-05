#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    map<string, double> mp;
    map<string, double> :: iterator it;
    double sum = 0;
    while(t>0){
        int M;
        cin>>M;
        while (M>0)
        {
            string str; int cnt;
            cin>>str>>cnt;
            sum += cnt;
            mp[str]+=cnt;
            M--;
        }
        t--;
    }
    for (auto &&it : mp)
    {
        cout<<it.first<<" "<<it.second/sum*100<<endl;
    }
    
    return 0;
}