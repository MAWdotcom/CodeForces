#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    stack<int>s2;
    s.push(1);
    s.push(2);
    s.push(3);

    s2.swap(s);
    // while (!s.empty())
    // {
    //      cout<<"Top"<<" "<<s.top()<<" ";
    //      s.pop();
    // }
    // cout<<endl;
   

   //swap
   cout<<"s size:"<<s.size()<<endl;
   cout<<"s2.size"<<s2.size()<<endl;

}