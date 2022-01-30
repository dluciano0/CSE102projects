#include <iostream>
#include <list>
#include <string>
#include "list.h"

using namespace std;

int main()
{
    list <int> myList;

    display_list(myList, "The original list is: ");

    added_list(myList, "\n\nThe list with the additional numbers is: ");

    reversed_list(myList, "\n\nThe list in reverse is: ");

    removed_nodes_list(myList, "\n\nThe list with removed ends is: ");

    return 0;
}
