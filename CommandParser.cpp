#include "CommandParser.h"
#include <sstream>
using namespace std;

CommandType CommandParser::parseCommand(const string& input,vector<string>& tokens) const {
    tokens.clear();
    string token;
    stringstream ss(input);
    while (ss >> token) {
        tokens.push_back(token);}
    if (tokens.empty()) {
        return CommandType::INVALID;}
    const string& cmd = tokens[0];
    if (cmd == "view" && tokens.size() == 2) {
        return CommandType::VIEW;}
    if (cmd == "append" && tokens.size() == 2) {
        return CommandType::APPEND;}
    if (cmd == "search" && tokens.size() == 3) {
        return CommandType::SEARCH;}
    if (cmd == "delete" && tokens.size() == 2) {
        return CommandType::DELETE;}
    if (cmd == "exit" && tokens.size() == 1) {
        return CommandType::EXIT;}
    return CommandType::INVALID;
}
