#ifndef COMMANDPARSER_H
#define COMMANDPARSER_H
#include <string>
#include <vector>
using namespace std;
enum class CommandType{
VIEW,
APPEND,
SEARCH,
DELETE,
EXIT,
INVALID
};

class CommandParser {
public:
    CommandType parseCommand(
        const string& input,
        vector<string>& tokens
    ) const;
};
#endif
