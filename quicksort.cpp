// Quick sort

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;

    cout << "Enter the length of array : ";
    cin >> size;

    vector<int> arr(size, 0);

    for (int i = 0; i < size; i++) {
        cout << "Enter the value of array : ";
        cin >> arr[i];
    }

    cout << "---------------------Before---------------------" << endl;
    for (int val : arr) {
        cout << val << " ";
    }

    int count = 0;

    for(int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0) {
            if(arr[j] > key) {
                arr[j+1] = arr[j];
                j--;
            } else {
                break;
            }
        }
        arr[j+1] = key;
        count++;
    }

    cout << endl;
    
    cout << "---------------------After---------------------" << endl;
    
    for (int val : arr) {
        cout << val << " ";
    }

    cout << endl;
    
    cout << "counts : " << count << endl;

    return 0;
}