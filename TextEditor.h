#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H
#include<string>
using namespace std;
class TextEditor{
public:
void view(const string& filename);
void append(const string& filename);
void clear(const string& filename);
void search(const string& filename, const string& keyword);
};
#endif
