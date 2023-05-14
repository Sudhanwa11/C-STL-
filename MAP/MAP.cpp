#include <iostream>
#include <map>
using namespace std;
//maps

int main() {

    map<int,string> m;
    m[1] = "sudhanwa";
    m[2] = "vaid";
    m[13] = "love";
    m.insert({5,"you"});

    cout<< "before erase"<<endl;
    for (auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<endl;
    cout<< "finding 13-> "<<m.count(13)<<endl;
    cout<<endl;
    
    m.erase(13);
    cout<< "after erase "<<endl;
    for (auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<endl;
    
    auto it = m.find(5);
    for (auto i=it; i!=m.end(); i++) {
        cout<<(*i).first<<endl;
    }

}
