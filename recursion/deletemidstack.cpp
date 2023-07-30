#include<bits/stdc++.h>
    using namespace std;
    void delmd(stack<int>&s,int k)
    {
        if(k==1){
            s.pop();
            return;
        }
        int temp =s.top();
        s.pop();
        cout<<k<<endl;
                cout<<"stack "<<s.top()<<endl;
        cout<<"delmd"<<endl;
        delmd(s,k-1);
        cout<<k<<endl;
        cout<<"stack "<<s.top()<<endl;
        cout<<"push"<<endl;
        s.push(temp);
        return;
    }
    int main(){
    stack<int>s;
    s.push(5);
    s.push(1);
    s.push(0);
    s.push(2);
    s.push(4);
    s.push(5);
    // s.push(3);
    delmd(s,4);
        while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
return 0;
}