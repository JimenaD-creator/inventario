#include <iostream>
#include "History.h"
using namespace std;

void History::addRecord(const string& record){
    records.push_back(record);
    
}
void History::showHistory(){
    cout << "Historial de operaciones";
    for(auto& record: records){
        cout << record <<endl;
    }
}