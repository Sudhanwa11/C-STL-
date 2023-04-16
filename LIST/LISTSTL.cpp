#include <iostream>
#include <list>
using namespace std;
int main() {
    //to make a list
    list<int> l;
    
    //to add elements
    l.push_back(2);
    l.push_front(1);
    l.push_back(3);
    cout<< "list is "<<endl;
    for (int i:l) {
        cout<< i << " ";
    }
    cout<<endl;
    
    //to erase a element
    cout<< "before erase elements "<<l.size()<<endl;
    l.erase(l.begin());
    cout<< "after erase elements "<<l.size()<<endl;
    cout<< "after erase now deque is "<<endl;
    for (int i:l) {
        cout<< i << " ";
    }
    cout<<endl;
    
    //to find size of list
    cout<< "size of list is now "<<l.size()<<endl;
    
}
