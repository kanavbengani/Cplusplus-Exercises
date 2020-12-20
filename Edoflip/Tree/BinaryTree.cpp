#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
template <typename T>

class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void print(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ": ";
    if (root->left != NULL)
    {
        cout << "L = " << root->left->data;
    }
    if (root->right != NULL)
    {
        if (root->left == NULL)
        {
            cout << "     ";
        }
        cout << right << setw(12) << "R = " << root->right->data;
    }
    cout << endl;
    print(root->left);
    print(root->right);
}

BinaryTreeNode<int> *takeInput(string position)
{
    int rootData;
    cout << "Enter " << position << " Data: ";
    cin >> rootData;

    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput(to_string(rootData) + "'s left");
    BinaryTreeNode<int> *rightChild = takeInput(to_string(rootData) + "'s right");
    root->left = leftChild;
    root->right = rightChild;
}

int main()
{
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *left = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *right = new BinaryTreeNode<int>(3);
    root->left = left;
    root->right = right;
    print(takeInput("root"));
}