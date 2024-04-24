#include <iostream>
#include <vector>

using namespace std;
int main(){
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << '*';
    //     }
    // cout << endl;
        
    // }
    
    //pairs 
    // pair<int,pair<int,int>> p= {1,{3,4}};
    // cout<<p.second.first;
    
    
    // vectors
    // vector<int> v;
    // v.push_back(2);
    // v.push_back(3);
    // // cout << v[0];
    // vector<int>::iterator it = v.begin();
    // cout << *(it);
    // it++;
    // cout << *(it);
    int n =7789;
    while (n>0)
    {
        cout << n%10 << endl;
        n= n/10;
    }
    
}