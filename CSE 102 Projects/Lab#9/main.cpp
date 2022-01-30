#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include "maps.h"

using namespace std;

void split(const string &, char, vector<string> &);
bool openFile(ifstream &);
bool buildMap(map<string, set<int>> &);
void writeIndex(map<string, set<int>>);
string trim(string &);

int main()
{
    map<string, set<int>> wordMap;

    if(buildMap(wordMap));
    {
        writeIndex(wordMap);
    }


    return 0;
}
