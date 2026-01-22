#ifindef FILEUTILS_H
#define FILEUTILS_H
#include <string>
using namespace std;
namespace FILEUTILS{
 bool fileExists(const string& filename);
 void createFileIfNotExists(const string& filename);
}
#endif
