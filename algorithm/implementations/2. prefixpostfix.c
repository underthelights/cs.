#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    cout<<"input a: ";
    int a, orig_a=0;
    cin>>a;
    orig_a = a;
    a++;
    cout<<"a=a+1: a ="<<a;
    cout<<"\n";
    a++;
    cout<<"a=a+1: a ="<<a;
    cout<<"\n";
    a--;
    cout<<"a=a-1: a ="<<a;
    cout<<"\n";
    a = orig_a;
    ++a;
    cout<<"a=a+1: a ="<<a;
    cout<<"\n";
    ++a;
    cout<<"a=a+1: a ="<<a;
    cout<<"\n";
    --a;
    cout<<"a=a-1: a ="<<a;
    cout<<"\n";

    return 0;
}
