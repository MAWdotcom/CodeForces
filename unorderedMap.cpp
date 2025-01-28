#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>m;

    m.emplace("TV",100);
    m.emplace("Laptop",100);
    m.emplace("Ipad",100);
    m.emplace("Iphone",100);
    m.emplace("Apple",100);
    m.emplace("Tara",100);

   // m.erase(m.find("TV"));
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
}