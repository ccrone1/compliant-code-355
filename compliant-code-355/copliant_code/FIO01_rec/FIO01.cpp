#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * @brief A C++ program that reads and sorts ten integers in descending order, then writes the sorted results to a file named "sorted.txt" using C++ file streams.
 * Also, we use a file pointer through an ofstream declaration to avoid using just the file name.
 */
int main() {
    cout << "Please enter ten integers to be sorted (in decreasing order): " << endl;
    
    vector<int> arr(10);
    
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end(), greater<int>());
    
    cout << "The integers entered in decreasing order are: " << endl;
    
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << endl;
    }
    
    ofstream outFile("sorted.txt"); //Luckily, C++ has more options than C. Here, we use a declared ofstream to create a pointer to the file. In C++, we do not need to use C APIs like 'open' and 'write'
    
    if (!outFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }
    
    for (int i = 0; i < 10; ++i) {
        outFile << arr[i] << endl;
    }
    
    outFile.close();
    
    return 0;
}
