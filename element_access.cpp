#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40,50};
    // cout<<mylist.back()<<endl;
    // cout<<mylist.front()<<endl;
    cout<<*next(mylist.begin(),2)<<endl;
    return 0;
}