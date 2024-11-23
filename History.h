#include <string>
#include <list>
using namespace std;

class History{
    private:
    list<string> records;

    public:
    void addRecord(const string& record);
    void showHistory();
};