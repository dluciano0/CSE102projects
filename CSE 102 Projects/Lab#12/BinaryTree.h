#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED

using namespace std;

template <class T>
class BinaryTree
{
public:
    struct TreeNode
    {
        T value;
        TreeNode *left;
        TreeNode *right;
    };

    TreeNode *root;
    void insert(TreeNode *&, TreeNode *&);
    void destroySubTree(TreeNode *);
    void deleteNode(T, TreeNode *&);
    void makeDeletion(TreeNode *&);
    void displayInOrder(TreeNode *);
    void displayPreOrder(TreeNode *);
    void displayPostOrder(TreeNode *);
    int countNodes(TreeNode *&);

public:
    BinaryTree()
    { root = nullptr; }

    ~BinaryTree()
    { destroySubTree(root); }

    void insertNode(T);

    bool searchNode(T);

    void remove(T);

    void displayInOrder()
    { displayInOrder(root); }

    void displayPreOrder()
    { displayPreOrder(root); }

    void displayPostOrder()
    { displayPostOrder(root); }

    int numNodes();
};

template <class T>
void BinaryTree<T>::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
    if (nodePtr == nullptr)
    {
        nodePtr = newNode;
    }

    else if (newNode->value < nodePtr->value)
    {
        insert(nodePtr->left, newNode);
    }

    else
    {
        insert(nodePtr->right, newNode);
    }
}

template <class T>
void BinaryTree<T>::insertNode(T num)
{
    TreeNode *newNode = nullptr;

    newNode = new TreeNode;
    newNode->value = num;
    newNode->left = newNode->right = nullptr;

    insert(root, newNode);
}

template <class T>
void BinaryTree<T>::destroySubTree(TreeNode *nodePtr)
{
    if (nodePtr->left)
    {
        destroySubTree(nodePtr->left);
    }

    if (nodePtr->right)
    {
        destroySubTree(nodePtr->right);
    }

 delete nodePtr;
}

template <class T>
bool BinaryTree<T>::searchNode(T num)
{
    bool status = false;

    TreeNode *nodePtr = root;

    while (nodePtr)
    {
        if (nodePtr->value == num)
        {
            status = true;
        }

        else if (num < nodePtr->value)
        {
            nodePtr = nodePtr->left;
        }

        else
        {
            nodePtr = nodePtr->right;
        }
    }

    return status;
}

template <class T>
void BinaryTree<T>::remove(T num)
{
    deleteNode(num, root);
}

template <class T>
void BinaryTree<T>::deleteNode(T num, TreeNode *&nodePtr)
{
        if (num < nodePtr->value)
        {
            deleteNode(num, nodePtr->left);
        }

        else if (num > nodePtr->value)
        {
            deleteNode(num, nodePtr->right);
        }

        else
        {
            makeDeletion(nodePtr);
        }
}

template <class T>
void BinaryTree<T>::makeDeletion(TreeNode *&nodePtr)
{

    TreeNode *tempNodePtr = nullptr;

    if (nodePtr == nullptr)
    {
        cout << "Cannot delete empty node.\n";
    }

    else if (nodePtr->right == nullptr)
    {
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->left;
        delete tempNodePtr;
    }

    else if (nodePtr->left == nullptr)
    {
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->right;
        delete tempNodePtr;
    }

    else
    {

        tempNodePtr = nodePtr->right;

            while (tempNodePtr->left)
            {
                tempNodePtr = tempNodePtr->left;
            }


    tempNodePtr->left = nodePtr->left;
    tempNodePtr = nodePtr;

    nodePtr = nodePtr->right;
    delete tempNodePtr;
    }
}

template <class T>
void BinaryTree<T>::displayInOrder(TreeNode *nodePtr)
{
    if (nodePtr)
    {
        displayInOrder(nodePtr->left);
        cout << nodePtr->value << " ";
        displayInOrder(nodePtr->right);
    }
}

template <class T>
void BinaryTree<T>::displayPreOrder(TreeNode *nodePtr)
{
    if (nodePtr)
    {
        cout << nodePtr->value << endl;
        displayPreOrder(nodePtr->left);
        displayPreOrder(nodePtr->right);
    }
}

template <class T>
void BinaryTree<T>::displayPostOrder(TreeNode *nodePtr)
{
    if (nodePtr)
    {
        displayPostOrder(nodePtr->left);
        displayPostOrder(nodePtr->right);
        cout << nodePtr->value << " ";
    }
}

template <class T>
int BinaryTree<T>::numNodes()
{
    return countNodes(root);
}

template <class T>
int BinaryTree<T>::countNodes(TreeNode *&nodePtr)
{
    int count;

    if (nodePtr == nullptr)
    {
        count = 0;
    }

    else
    {
        count = 1 + countNodes(nodePtr->left) + countNodes(nodePtr->right);
    }

    return count;
}

#endif
