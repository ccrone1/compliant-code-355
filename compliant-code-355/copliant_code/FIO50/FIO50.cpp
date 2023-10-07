#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**
 * @brief Appends a message to a file and reads it back with proper checking to make sure the stream is clear
 *
 * This function appends a message to a file named 'words.txt' and then reads
 * the content of the file. It follows the FIO50-CPP rule by using file
 * positioning to ensure correct behavior.
 */
int main() {
    fstream file("words.txt");
    
    if (!file) {
        cerr << "Error: Unable to open the file." << endl;
        return (1);
    }
    
    // Appends data to the file through the fstream
    file << "Hello, World!\n";
    
    // Ensure proper positioning before reading through the same stream (makes sure we're at the beginning of the file for reading after we wrote to the file)
    file.seekg(0, ios::beg);
    
    string content;
    getline(file, content);
    
    cout << "File content: " << content << endl;
    
    file.close();
    
    return 0;
}
