#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s={10,20,30,20};

    for(int x:s)
        cout<<x<<endl;

    return 0;

}
