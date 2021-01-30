#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    int a, b, c;
    int *pa, *pb, *pc;
    cin>>a>>b>>c;
    pa=&a;pb=&b;pc=&c;

    int min = 999, max=-999;
    if(min>*pa) min=*pa;
    if(min>*pb) min=*pb;
    if(min>*pb) min=*pc;
    if(max<*pa) max=*pa;
    if(max<*pb) max=*pb;
    if(max<*pb) max=*pc;
    cout<<max<<" "<<min<<"\n";
    return 0;
}

