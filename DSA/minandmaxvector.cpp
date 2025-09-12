#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << *max_element(v.begin(), v.end()); 
    return 0;

}