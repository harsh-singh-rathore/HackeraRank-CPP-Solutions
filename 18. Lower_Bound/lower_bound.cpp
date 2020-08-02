#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned n;
    cin>>n;
    vector<int> a(n);
    for(vector<int>::iterator itr=a.begin(); itr<a.end(); itr++) {
        cin>>*itr;
    }
    int q;
    cin>>q;
    int qr;
    vector<int>::iterator point;
    for(int i=0; i<q; i++) {
        cin>>qr;
        point = lower_bound(a.begin(), a.end(), qr);
        if(qr == *point)
            cout<<"Yes ";
        else 
            cout<<"No ";
        cout<<(point - a.begin())+1<<endl;
    }
    return 0;
}
