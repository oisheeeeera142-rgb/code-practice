
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float average = static_cast<float>(sum) / size;
    cout << "Average value of the array elements: " << average << endl;

    return 0;
}
