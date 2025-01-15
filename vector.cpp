#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>myvec;
    myvec.push_back(10);
    cout<<myvec.size()<<endl;
    if(myvec.begin()==myvec.end()) cout<<"Equal"<<endl;
    else cout<<"not equal"<<endl;
    for(int i=1;i<=5;i++){
        myvec.push_back(i);
    }
    for(int i=0;i<myvec.size();i++){
        cout<<myvec[i]<<" ";
    }
    cout<<endl;
    cout<<"Size: "<<myvec.size()<<endl;
    cout<<"Last Element= "<<myvec.back()<<endl;
    sort(myvec.begin(),myvec.end());
    for(int i=0;i<myvec.size();i++){
        cout<<"Sorted Element: "<<myvec[i]<<" ";
    }
    cout<<"Last Element= "<<myvec.back()<<endl;
    myvec.pop_back();
    for(int i=0;i<myvec.size();i++){
        cout<<myvec[i]<<" ";
    }
    cout<<endl;
    cout<<"Last Element= "<<myvec.back()<<endl;
    cout<<"Size: "<<myvec.size()<<endl;

    return 0;
}