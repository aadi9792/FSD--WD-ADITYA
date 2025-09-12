#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
   vector<pair<int,int>>v;
   v.push_back({10,20});
   v.push_back({3,5});
   v.push_back({5,6});
   for(int i=0;i<v.size();i++){
    cout<<v[i];
   }
   cout<<*max_element(v.begin(),v.end());
}