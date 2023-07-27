#include<bits/stdc++.h>
    using namespace std;
        void insert(stack<int>&stk,int temp){
        if(stk.empty()){
            stk.push(temp);
            return;
        }
        int val = stk.top();
        stk.pop();
        insert(stk,temp);
        stk.push(val);
  
    }
    void rev(stack<int>&s){
        if(s.empty()){
            return;
        }
        int num = s.top();
        s.pop();
        rev(s);
        insert(s,num);
    }
    int main(){
        stack<int>s;
    s.push(5);
    s.push(1);
    s.push(0);
    s.push(2);
    s.push(4); 

           while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"rev"<<endl;
       s.push(5);
    s.push(1);
    s.push(0);
    s.push(2);
    s.push(4); 
    rev(s);
        while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
return 0;
}