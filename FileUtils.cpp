#include "FileUtils.h"
#include <fstream>
using namespace std;

namespace FileUtils {
bool fileExists(const string& filename) {
    ifstream file(filename);
    return file.good();
}
void createFileIfNotExists(const string& filename) {
    if (!fileExists(filename)) {
        ofstream file(filename);
        file.close();
    }
}
}
