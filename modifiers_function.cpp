#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40,50,60,70};
    list<int>newlist={500,1000};
    vector<int> v={2,4,6};
    // list<int>newList;
    // newList=mylist;
    // newList.assign(mylist.begin(),mylist.end());
    // mylist.push_back(100);
    // mylist.push_front(300);
    // mylist.pop_back();
    // mylist.pop_front();
    // mylist.insert(next(mylist.begin(),2),100);
    // mylist.insert(next(mylist.begin(),2),{100,300,400});
    // mylist.insert(next(mylist.begin(),2),newlist.begin(),newlist.end());
    // mylist.insert(next(mylist.begin(),2),v.begin(),v.end());
    // mylist.erase(next(mylist.begin(),2));
    // mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
    // replace(mylist.begin(),mylist.end(),30,100);
    // for(int val:mylist)
    // {
    //     cout<<val<<endl;
    // }

    auto it=find(mylist.begin(),mylist.end(),100);
    if(it==mylist.end())
    {
        cout<<" not found"<<endl;
    }
    else
    {
        cout<<"found"<<endl;
    }
    return 0;
}