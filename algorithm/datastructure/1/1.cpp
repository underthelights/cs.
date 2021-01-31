#include <iostream>

#define MAX_SIZE 1001
using namespace std;
void heapify(int arr[], int n, int i) {
    int lg = i, l = 2 * i + 1, r = 2 * i + 2;

    if (l < n && arr[l] > arr[lg]) lg = l;
    if (r < n && arr[r] > arr[lg]) lg = r;

    if (lg != i) {
        swap(arr[i], arr[lg]);
        heapify(arr, n, lg);
    }
    return;
}

void heapSort(int arr[], int n){
    for (int i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Driver code
int main(){
    int data [MAX_SIZE];
    int sorted_data[MAX_SIZE] = {0};
    int buf, cnt=0, i=0;

    while(1) {
        cout << "enter a number: ";
        cin >> buf;
        data[cnt] = buf;

        if (buf == -999) {
            cout<<"-------goodbye world!!--------";
            break;
        }

        cnt++;

        cout << "unsorted : ";
        int n = sizeof(data)/sizeof(data[0]);
        printArray(data, cnt);

        int *data2 = (int *)malloc(sizeof(int)*cnt);

        for(int j=0;j<cnt;j++) data2[j] = data[j];
        heapSort(data2, cnt);
        cout << "sorted : ";
        printArray(data2, cnt);
        free(data2);
    }
    return 0;
}
