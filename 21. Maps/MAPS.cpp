#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string, int> Map;
    int q;
    cin>>q;
    for(int i = 0; i<q; i++) {
        int n;
        cin>>n;
        switch(n)
        {
            case 1:{
                string name;
                int marks;
                cin>>name>>marks;
                map<string,int>::iterator itr=Map.find(name);
                if(itr==Map.end())
                Map.insert(make_pair(name,marks));
                else
                itr->second+=marks;
                break;
            }
            case 2:{
                string name;
                cin>>name;
                Map.erase(name);
                break;
            }
            case 3: {
                string name;
                cin>>name;
                map<string,int>::iterator itr=Map.find(name);
                if(itr==Map.end())
                    cout<<"0"<<endl;
                else
                    cout<<itr->second<<endl;
                break;
            }
        }
    }
    return 0;
}