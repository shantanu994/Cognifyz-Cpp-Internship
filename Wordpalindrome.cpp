#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    bool isPalindrome = true;
    
    cout << "Enter a word or phrase: ";
    getline(cin, word);
    
    for(int i = 0; i < word.length(); i++) {
        if(word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = word[i] + 32;
        }
    }
    
    string cleanWord = "";
    for(int i = 0; i < word.length(); i++) {
        if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= '0' && word[i] <= '9')) {
            cleanWord = cleanWord + word[i];
        }
    }
    
    int left = 0;
    int right = cleanWord.length() - 1;
    
    while(left < right) {
        if(cleanWord[left] != cleanWord[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    if(isPalindrome) {
        cout << "The word/phrase is a palindrome!";
    } else {
        cout << "The word/phrase is NOT a palindrome.";
    }
    
    return 0;
}
