#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

using namespace std;

void display_list(list<int> &myList, string message)
{
    for(int x = 0; x < 100; x += 10)
        myList.push_back(x);

    cout << message << endl;

    for(auto it = myList.begin(); it != myList.end(); it++)
        cout << *it << " ";
}

void added_list(list<int> &myList, string message)
{
    int five = 5;

    for(auto it = myList.begin(); it != myList.end(); it++)
    {
        if(it != myList.begin())
        {
            myList.insert(it, five);
            five = five + 10;
        }
    }

    cout << message << endl;

    for(auto it = myList.begin(); it != myList.end(); it++)
        cout << *it << " ";
}

void reversed_list(list<int> &myList, string message)
{
    myList.reverse();

    cout << message << endl;

    for(auto it = myList.begin(); it != myList.end(); it++)
        cout << *it << " ";
}

void removed_nodes_list(list<int> &myList, string message)
{
    myList.remove(90);
    myList.remove(0);

    cout << message << endl;

    for(auto it = myList.begin(); it !=myList.end(); it++)
        cout << *it << " ";
}
#endif // LIST_H_INCLUDED
