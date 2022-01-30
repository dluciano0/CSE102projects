#include <iostream>
#include <fstream>
#include <string>
#include "file.h"

using namespace std;

int main()
{
    ifstream in_stream;

    open_files(in_stream);

    display_output(in_stream);

    in_stream.close();

    return 0;
}
