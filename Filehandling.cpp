#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string sourceFileName, destFileName;
    
    cout << "Enter the name of the source file: ";
    cin >> sourceFileName;
    
    cout << "Enter the name of the destination file: ";
    cin >> destFileName;
    
    ifstream sourceFile(sourceFileName);
    
    if (!sourceFile.is_open()) {
        cout << "Error: Could not open source file '" << sourceFileName << "'";
        return 1;
    }
    
    ofstream destFile(destFileName);
    
    if (!destFile.is_open()) {
        cout << "Error: Could not create destination file '" << destFileName << "'";
        sourceFile.close();
        return 1;
    }
    
    char ch;
    while (sourceFile.get(ch)) {
        destFile.put(ch);
    }
    
    sourceFile.close();
    destFile.close();
    
    cout << "File copied successfully from '" << sourceFileName << "' to '" << destFileName << "'";
    
    return 0;
}
