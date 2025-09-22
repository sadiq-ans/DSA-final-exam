#include <iostream>
using namespace std;

class QuickSorter {
private:
    int arr[100];
    int n;

    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int partition(int low, int high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }

    void quickSort(int low, int high) {
        if (low < high) {
            int pi = partition(low, high);
            quickSort(low, pi - 1);
            quickSort(pi + 1, high);
        }
    }

public:
    QuickSorter() {
        n = 0;
    }

    void inputElements() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        if (n == 0) {
            cout << "No elements to display.\n";
            return;
        }
        cout << "Array elements: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void sortArray() {
        if (n == 0) {
            cout << "No elements to sort.\n";
            return;
        }
        quickSort(0, n - 1);
        cout << "Array sorted successfully!\n";
    }
};

int main() {
    QuickSorter qs;
    int choice;

    do {
        cout << "\n--- Quick Sort Menu ---\n";
        cout << "1. Input Elements\n";
        cout << "2. Display Elements\n";
        cout << "3. Sort Elements (Quick Sort)\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                qs.inputElements();
                break;
            case 2:
                qs.display();
                break;
            case 3:
                qs.sortArray();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}