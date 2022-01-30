#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main()
{
    BinaryTree<int> tree;

    cout << "Inserting nodes with 12, 9, 10, 15, 18, 17 and 20" << endl;
    tree.insertNode(12);
    tree.insertNode(9);
    tree.insertNode(10);
    tree.insertNode(15);
    tree.insertNode(18);
    tree.insertNode(17);
    tree.insertNode(20);

    cout << "\nThe number of nodes in the tree is now: " << tree.numNodes() << endl;

    cout << "\nHere are the values in the tree in order: " << endl;
    tree.displayInOrder();

    cout << endl << "\nnow deleting 9 from the tree..." << endl;
    tree.remove(9);
    cout << "now deleting 15 from the tree..." << endl;
    tree.remove(15);

    cout << "\nThe number of nodes in the tree is now: " << tree.numNodes() << endl;

    cout << "\nHere are the values in the tree in order: " << endl;
    tree.displayInOrder();

    cout << endl << "\nHere are the values in the tree in POST order:" << endl;
    tree.displayPostOrder();

    cout << endl << "\n\tTree" << endl;
    cout << "\t |" << endl;
    cout << "\t 12" << endl;
    cout << "\t / \\" << endl;
    cout << "\t10 18" << endl;
    cout << "\t   / \\" << endl;
    cout << "\t  17  20" << endl;

    cout << "\nBinary Tree - D Luciano" << endl << endl;


    return 0;
}
