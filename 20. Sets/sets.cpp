#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int nq;
    cin>>nq;
    set<int> s;
    int q;
    int n;
    for(int i=0; i<nq; i++) {
        cin>>q;
        cin>>n;
        switch(q)
        {
            case 1: {
                s.insert(n);
                break;
            }
            case 2: {
                s.erase(n);
                break;
            }
            case 3: {
                set<int>::iterator itr = s.find(n);
                if(itr == s.end()) {
                    cout << "No"<< endl;
                } else {
                    cout << "Yes" << endl;
                }
            }
        }
    }
    return 0;
}