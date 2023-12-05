#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin>>n;
    vector<string> names;
    vector<int> scores;
    for (int i = 0; i < n; i++)
    {
        string s;
        int p;
        cin>>s>>p;
        names.push_back(s);
        scores.push_back(p);
    }
    sort(names.begin(), names.end());
    sort(scores.begin(), scores.end());
    for (int i = 0; i < n; i++)
    {
        cout<<names[i] <<" "<<scores[i]<<endl;
    }
    return 0;    
}