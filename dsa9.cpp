1D array -

  #include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 1D array of size 5
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Output the array elements
    cout << "Array elements are: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Modify an array element
    arr[2] = 100;
    
    // Output the updated array
    cout << "Updated array elements are: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
