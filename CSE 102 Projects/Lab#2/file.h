#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void open_files(ifstream& infile)
{
    string fileName;

    cout << "Enter the file name: ";
    cin >> fileName;

    infile.open(fileName);

    if(infile.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }
}

void display_output(ifstream& infile)
{
    string input;
    int lineNum = 0;

    getline(infile, input);

    while(!infile.eof())
    {
        lineNum++;

        cout << setw(3) << right <<" " << lineNum << ":" << input << "\n";

        if(lineNum % 24 == 0)
        {
            cout << "\t\Press enter to continue...";
            cin.get();
            cin.get();
        }

        getline(infile, input);
    }
}

#endif // FILE_H_INCLUDED
