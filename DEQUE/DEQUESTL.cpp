#include <iostream>
#include <deque>
using namespace std;
int main() {
    //to create deque
    deque<int> d;
    
    //to add elements
    d.push_back(2);
    d.push_back(3);
    
    //to add element at front
    d.push_front(1);
    cout<< "deque is "<<endl;
    for (int i:d) {
        cout<< i << " ";
    }
    cout<<endl;
    
    //to find first elment of vector
    cout<< "front element-> "<< d.front()<<endl;
    
    //to find last element of vector
    cout<< "last element-> "<< d.back()<<endl;
    
    //to find elements
    cout<< "first index element-> "<<d.at(0)<<endl;
    
    //to remove elements from back
    d.pop_back();
    cout<< "after pop back now deque is "<<endl;
    for (int i:d) {
        cout<< i << " ";
    }
    cout<<endl;

    //to remove elements from front
    d.pop_front();
    cout<< "after pop front now deque is "<<endl;
    for (int i:d) {
        cout<< i << " ";
    }
    cout<<endl;
    
    //if deque is empty or not
    cout<< "empty or not-> "<<d.empty()<<endl;
    
    d.push_back(3);
    d.push_front(1);
    cout<< "deque is "<<endl;
    for (int i:d) {
        cout<< i << " ";
    }
    cout<<endl;
    
    //to erase a element from deque
    cout<< "before erase elements "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<< "after erase elements "<<d.size()<<endl;
    cout<< "after erase now deque is "<<endl;
    for (int i:d) {
        cout<< i << " ";
    }
}
