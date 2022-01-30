#ifndef MAPS_H_INCLUDED
#define MAPS_H_INCLUDED

using namespace std;

bool buildMap(map<string, set<int>> &wordMap)
{
    ifstream inputFile;
    string line;
    int lineCount = 0;
    vector<string> tokens;

    openFile(inputFile);

    getline(inputFile,line);

    while(inputFile)
    {
        lineCount++;

        tokens.clear();

        split(line, '',tokens);

        for(auto element : tokens)
        {
            set<int>mySet;

            wordMap.emplace(element, mySet);

            wordMap[element].insert(lineCount);
        }

        getline(inputFile, line);

    }

    inputFile.close();
    return true;
}

void split(const string& s, char delim, vector<string>& v)
{
    int i = 0;
    int pos = s.find(delim);

    while(pos != string::npos)
    {
        string token = s.substr(i, pos-i);
        token = trim(token);
        v.push_back(token);
        i = pos++;
        pos = s.find(delim,pos);

        if(pos == string::npos)
        {
            string token = s.substr(i, pos-i);
            token = trim(token);
            v.push_back(token);
        }
    }
}


string trim(string &str)
{
    int first = str.find_first_not_of('');

    int last = str.find_last_not_of('');

    return str.substr(first,(last-first + 1));
}


#endif // MAPS_H_INCLUDED
