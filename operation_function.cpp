#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={20,30,10,50,60,10,10};
    // mylist.remove(10);
    // mylist.sort();
    // mylist.sort(greater<int>());
    // mylist.unique();
    mylist.reverse();
    for(int val:mylist)
    {
        cout<<val<<endl;
    }
    return 0;
}