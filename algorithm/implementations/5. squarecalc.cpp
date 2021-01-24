#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
void printOne(int n){
    cout << "Result : " << n << "\n";
    return;
}

void sqr(int n){
    printOne(n*n);
    return;
}

int main(void) {
    int n;
    cout<<"input :: ";

    cin >> n;
    sqr(n);
    return 0;
}
