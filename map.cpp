#include<bits/stdc++.h>
using namespace std;

int  main(){
    map<string ,int> m;

    m["TV       "]=50;
    m["Iphone   "]=100;
    m["Laptop"]=150;
    m["watchs   "]=55;
    m["Macbook  "]=120;
    m["Headphone"]=510;

    //m.insert({"camera",15});
    m.emplace("Airpods   ",20 );
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<"Count of key ="<<m.count("Laptop")<<endl;
    cout<<"count of value ="<<m["Laptop"]<<endl;


    //find
    if(m.find("camera")!=m.end()){
        cout<<"Found\n";
    }
    else{
        cout<<"Not Found\n";
    }
}