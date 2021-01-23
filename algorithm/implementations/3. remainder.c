#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    cout<<"input two integers: ";
    int a=0, b=0;
    cin>> a >> b;
    cout << a << "/" << b << " is "<<a/b <<" with a remainder of "<<a%b<<"\n";
    return 0;
}
