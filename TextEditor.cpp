#include "TextEditor.h"
#include "FileUtils.h"
#include <iostream>
#include <fstream>

using namespace std;

void TextEditor::view(const string& filename) const {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: File not found.\n";
        return;
    }

    string line;
    int lineNumber = 1;
    while (getline(file, line)) {
        cout << lineNumber++ << ": " << line << endl;
    }

    file.close();
}

void TextEditor::append(const string& filename) const {
    FileUtils::createFileIfNotExists(filename);

    ofstream file(filename, ios::app);
    if (!file.is_open()) {
        cout << "Error: Unable to open file for writing.\n";
        return;
    }

    cout << "Enter text (type END on a new line to stop):\n";

    string line;
    while (true) {
        getline(cin, line);
        if (line == "END")
            break;
        file << line << endl;
    }

    file.close();
}

void TextEditor::clear(const string& filename) const {
    ofstream file(filename, ios::trunc);
    if (!file.is_open()) {
        cout << "Error: Unable to clear file.\n";
        return;
    }

    file.close();
    cout << "File cleared successfully.\n";
}

void TextEditor::search(const string& filename, const string& keyword) const {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: File not found.\n";
        return;
    }

    string line;
    int lineNumber = 1;
    bool found = false;

    while (getline(file, line)) {
        if (line.find(keyword) != string::npos) {
            cout << "Found at line " << lineNumber << ": " << line << endl;
            found = true;
        }
        lineNumber++;
    }

    if (!found) {
        cout << "Keyword not found in file.\n";
    }

    file.close();
}
