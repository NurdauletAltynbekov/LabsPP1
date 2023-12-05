#include <bits/stdc++.h>

using namespace std;

int main (){
    string str;
    stack<char> st;
    cin>>str;
    for (int i = 0; i < str.length(); i++)
    {
        if(st.empty()){
            st.push(str[i]);
        }
        else if(!st.empty()){
            int num;
            num = (st.top()-'0')*10 + (str[i]-'0');
            if((int)sqrt(num) == sqrt(num)){
                st.pop();
            }
            else{
                st.push(str[i]);
            }
        }
    }
    if(st.empty()){
        cout<<"Stack is empty";
    }
    else{
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
    }
    return 0;
    
}