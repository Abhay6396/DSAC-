#include<bits/stdc++.h>

using namespace std;

int main(){
    pair<int, int> p =  {1,2};
    cout << "first elem "<<p.first;
    // nested pair property 
    pair<int,pair<int,int>> p1 = {1,{2,3}};
    cout << p1.first <<p1.second.first  << p1.second.second;
    // pair type array
    pair <int,int> arr[]={{1,2},{3,4}};
    cout << arr[1].second;
    return 0;
}