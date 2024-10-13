//     #include <bits/stdc++.h>
// using namespace std;
// void print(map<int,string> &m){
//     cout << m.size() << endl;
// for (auto &value :m){
//     cout << value.first<< " " << value.second << endl;
// }
// }
// int main(){
// map<int ,string > m;
// m[1]= "abc";
// m[9]="bcd";//0(log(n))
// m[3]="nvc";
// m.insert({4, "asg"});
// auto it =m.find(5);
// if (it!=m.end())
// m.erase(it);
// m.clear();
// if (it==m.end()){
//     cout << " no value";
// }else {
//     cout << (*it).first << " " << (*it).second ;
// }
// print (m);
// }


 // map<int,string> :: iterator it ;
// for (it =m.begin () ;it!=m.end();++it){
//     cout << (*it).first << " "<< (*it).second<< endl;

//     cout << it->first << " " << it ->second << endl; 
// }

// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
// cin >> n;
// map<string,int> m;
// for (int i=0;i<n;i++){
// string s;
// cin >> s;
// m[s]++;}

// for (auto pr : m){
//     cout << pr.first << " " << pr.second ;
// }
// }

 
 
 
 
 
 //unordered maps
 
 #include <bits/stdc++.h>


using namespace std;
void print(unordered_map<int,string> &m){
    cout << m.size() << endl;
for (auto &value :m){
    cout << value.first<< " " << value.second << endl;
}
}
int main(){
unordered_map<int ,string > m;
m[1]= "abc";
m[9]="bcd";//0(n)
m[3]="nvc";
m.insert({4, "asg"});
print(m);
}