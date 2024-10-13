#include <bits/stdc++.h>
using namespace std;
void print(set<string >&s){
    for (string value :s){
        cout << value << endl;
    }
//     for (auto it=s.begin();it!=s.end();it++){
// cout << (*it)<< endl;
//     }
}
int main (){
    set<string> s;
    s.insert("avs");//log(n)
    s.insert("hg");
    s.insert("jhg");
    s.insert("avs");
    auto it =s.find("avs"); //log(n)
    if (it!=s.end()){
    }
     s.erase(it);
   print(s);
}