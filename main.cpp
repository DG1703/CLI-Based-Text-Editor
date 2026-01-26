#include <iostream>
#include <string>
#include <vector>
#include "TextEditor.h"
#include "CommandParser.h"
#include "FileUtils.h"
using namespace std;

void showInstructions() {
    cout << "\n--- CLI Text Editor (Notepad Lite) ---\n";
    cout << "Commands:\n";
    cout << "  view <filename>\n";
    cout << "  append <filename>\n";
    cout << "  search <filename> <word>\n";
    cout << "  delete <filename>\n";
    cout << "  exit\n";
    cout << "-----------------------------------\n";
}

int main() {
    TextEditor editor;
    CommandParser parser;
    vector<string> tokens;
    string input;
    showInstructions();
    while (true) {
        cout << "\n> ";
        getline(cin, input);
        CommandType cmd = parser.parseCommand(input, tokens);
        switch (cmd) {
            case CommandType::VIEW:
                editor.view(tokens[1]);
                break;
            case CommandType::APPEND:
                editor.append(tokens[1]);
                break;
            case CommandType::SEARCH:
                editor.search(tokens[1], tokens[2]);
                break;
            case CommandType::DELETE:
                editor.clear(tokens[1]);
                break;
            case CommandType::EXIT:
                cout << "Exiting editor...\n";
                return 0;
            default:
                cout << "Invalid command. Type again.\n";
                break;
        }
    }
    return 0;
}
