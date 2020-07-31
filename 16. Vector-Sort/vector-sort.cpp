#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> vec(n);
    
    for(vector<int>::iterator itr = vec.begin(); itr<vec.end(); itr++) {
        cin>>*itr;
    }

    sort(vec.begin(), vec.end());
    
    for(vector<int>::iterator itr = vec.begin(); itr<vec.end(); itr++) {
        cout<<*itr<<" ";
    }

    return 0;
}
