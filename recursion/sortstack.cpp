//  2 0 1 5
// 2 is top
// op -> 5 2 1 0
#include<bits/stdc++.h>
    using namespace std;
    void insert(stack<int>&stk,int temp){
        if(stk.empty()==true || temp>=stk.top()){
            stk.push(temp);
            return;
        }
        int val = stk.top();
        stk.pop();
        insert(stk,temp);
        stk.push(val);
        return;
    }
    void sort(stack<int>&stk){
           if(stk.size()==1){
             return;
           }
           int temp = stk.top();
           stk.pop();
           sort(stk);
           insert(stk,temp);
    }
    int main(){
    stack<int>s;
    s.push(5);
    s.push(1);
    s.push(0);
    s.push(2);
    
    sort(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
return 0;
}