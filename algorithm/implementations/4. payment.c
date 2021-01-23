#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    cout<<"Price : ";
    int a=0, b=0;
    cin>> a;

    b=a*1.05*1.05*1.05;
    cout << "-----------output-----------"<<"\n";
    cout << "Month\t" << ":\t" << "3"<< ":\t"<< "6"<<"\n";
    cout << "Payment\t" << ":" <<"\t"<< a<< ":\t" << b<<"\n";

    cout << "---------------------------"<<"\n";
    cout.precision(1);
    cout << "P/month\t" << ":\t" << (double)a/3<< ":\t" <<(double) b/6<<"\n";

    return 0;
}
