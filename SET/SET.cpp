#include <iostream>
#include <set>
using namespace std;


int main() {

    //create set
    set<int> s;
    
    //to add value
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    
    //to print
    for (auto i : s) {
        cout<< i <<endl;
    }
    cout<<endl;
    
    //iterator
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s) {
        cout<< i <<endl;
    }
    cout<<endl;
    
    //to erase beginning element
    s.erase(s.begin());
    for (auto i : s) {
        cout<< i <<endl;
    }
    cout<<endl;
    
    //count
    cout<<"7 is present or not-> "<<s.count(7)<<endl;
    cout<<endl;
    
    //find
    set<int>::iterator itr = s.find(5);
    for (auto it=itr; it!=s.end(); it++) {
        cout<<*it<<endl;
    }

    cout<<endl;
}
