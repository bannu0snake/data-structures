//find kth smallest element in a array
#include<iostream>
#include<set>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int k = 3;
    set<int> arr;
    cin>>n;
    for ( int i = 0; i < n; i++)
    {
        int a ;
        cin>>a;
        arr.insert(a);
    }
    for (auto i :arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    auto it = arr.begin();
    advance(it, k);
    int x = *it;
    cout<<x;
    
    return 0;
}
