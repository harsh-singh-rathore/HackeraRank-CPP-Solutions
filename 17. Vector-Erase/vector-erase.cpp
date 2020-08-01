#include <vector>
#include <iostream>

using namespace std;


int main() {

    int n;
    cin>>n;
    vector<int> v(n);
    for(vector<int>::iterator itr=v.begin();itr<v.end();itr++) {
        cin>>*itr;
    }

    int a, start, end;

    cin>>a;
    cin>>start>>end;
    start--;
    end--;
    a--;

    v.erase(v.begin()+a);
    v.erase(v.begin()+start, v.begin()+end);
    cout<<v.size()<<endl;
    for(vector<int>::iterator itr=v.begin();itr<v.end();itr++) {
        cout<<*itr<<" ";
    }


    return 0;
}
