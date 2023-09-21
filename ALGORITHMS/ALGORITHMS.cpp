#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    //create
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    //binary search
    cout<<"finding 6-> "<<binary_search(v.begin(), v.end(), 6)<<endl;
    //lower bound
    cout<<"lower bound-> "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    //upper bound
    cout<<"upper bound-> "<<upper_bound(v.begin(), v.end(), 6)-v.begin()<<endl;

    //min and max
    int a = 3, b = 5;
    cout<< "max-> "<< max(a,b);
    cout<<endl;
    cout<< "min-> "<< min(a,b);
    cout<<endl;

    //swap
    swap(a,b);
    cout<< "a-> "<<a<<endl;
    cout<< "b-> "<<b<<endl;
    cout<<endl;

    //reverse
    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<< "string-> "<<abcd<<endl;
    cout<<endl;

    //rotate
    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"after rotate "<<endl;
    for (auto i:v) {
        cout<<i<<" "<<endl;
    }
    cout<<endl;

    //sort
    sort(v.begin(), v.end());
    cout<<"after sort"<<endl;
    for (auto i:v) {
        cout<<i<<" "<<endl;
    }

}
