#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <sstream>

using namespace std;

int countVowelsAndConsonants(const string &text) {
    int vowelCount = 0;
    int consonantCount = 0;
    set<char> vowelsFound;
    set<char> consonantsFound;

    for (char c : text) {
        if (isalpha(c)) {
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
                c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowelCount++;
                vowelsFound.insert(c);
            } else {
                consonantCount++;
                consonantsFound.insert(c);
            }
        }
    }

    cout << "1. Number of vowels: " << vowelCount << endl;
    cout << "   Number of consonants: " << consonantCount << endl;

    cout << "2. Vowels found: ";
    for (char vowel : vowelsFound) {
        cout << vowel << " ";
    }
    cout << endl;

    cout << "Consonants found: ";
    for (char consonant : consonantsFound) {
        cout << consonant << " ";
    }
    cout << endl;
    
    return 0;
}

void separateWordsByStartingLetter(const string &text) {
    vector<string> vowelWords;
    vector<string> consonantWords;
    string word;
    istringstream stream(text);

    while (stream >> word) {
        char firstLetter = word[0];
        if (isalpha(firstLetter)) {
            if (firstLetter == 'A' || firstLetter == 'E' || firstLetter == 'I' ||
                firstLetter == 'O' || firstLetter == 'U' || firstLetter == 'a' ||
                firstLetter == 'e' || firstLetter == 'i' || firstLetter == 'o' ||
                firstLetter == 'u') {
                vowelWords.push_back(word);
            } else {
                consonantWords.push_back(word);
            }
        }
    }

    cout << "3. Words starting with vowels: ";
    for (string word : vowelWords) {
        cout << word << " ";
    }
    cout << endl;

    cout << "Words starting with consonants: ";
    for (string word : consonantWords) {
        cout << word << " ";
    }
    cout << endl;
}

int main() {
    string inputString;
    getline(cin, inputString);
    
    countVowelsAndConsonants(inputString);
    separateWordsByStartingLetter(inputString);
    
    return 0;
}
