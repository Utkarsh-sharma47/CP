#include <bits/stdc++.h>

using namespace std;
int main ()
{

    /*basic input output*/
    unordered_map <int , string> m;
    m[3]="abc";
    m[1]="bcd";
    m[2]="zfd";

    for(auto it: m)
    {
        cout<<"key:"<<it.first<<"  value:"<<it.second<<endl;
    }

    /*find funtion*/
    auto x=m.find(2);
    cout<<(*x).first<<" "<<(*x).second;

    return 0;
}
