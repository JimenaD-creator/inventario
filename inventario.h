#include <string>
using namespace std;

class Inventory{
    private: 
    unordered_map<string, int> products;
    
    public:
    void addProduct(string& name, int quantity);
    int getProduct(string& name);
    bool removeProduct(string& name);

};