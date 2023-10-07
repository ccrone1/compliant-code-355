#include <iostream>
#include <algorithm>

using namespace std;

/**
 @brief a simple array copy where the arrray is a container and the size of a destination container is large enough to hold all the data that is being copied to it
 */
int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5]; // declare the destination array to have enough space to hold all of the data form the source array
    
    // Ensure the destination array has enough capacity
    copy(source, source + 5, destination);
    
    // Print the copied elements
    for (int i = 0; i < 5; ++i) {
        cout << destination[i] << " ";
    }
    
    return 0;
}
