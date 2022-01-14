//print numbers using recursion
#include<iostream>
using namespace std;
void fun(int n){
    if (n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
    
}
int main(int argc, char const *argv[])
{
    fun(5);
    return 0;
}
