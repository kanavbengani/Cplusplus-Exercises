#include <iostream>
#include <vector>
#include <queue>
using namespace std;
template <typename T>

class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data)
    {
        this->data = data;
    }
};

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data: " << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter number of children of " << front->data << ": " << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter " << i + 1 << "th child of " << front->data << ": " << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printLevelWise(TreeNode<int> *root)
{
    queue<TreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode<int> *front;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            front = q.front();
            q.pop();
            cout << front->data << " ";
            for (int i = 0; i < front->children.size(); i++)
            {
                q.push(front->children.at(i));
            }
        }
        cout << endl;
    }
}

void printLevel(TreeNode<int> *root, int level)
{
    queue<TreeNode<int> *> q;
    q.push(root);
    for (int i = 0; i < level; i++)
    {
        TreeNode<int> *front;
        int size = q.size();
        for (int j = 0; j < size; j++)
        {
            front = q.front();
            q.pop();
            if (i == level - 1)
            {
                cout << front->data << " ";
            }
            for (int k = 0; k < front->children.size(); k++)
            {
                q.push(front->children.at(k));
            }
        }
        cout << endl;
    }
}

void printLevelUsingRec(TreeNode<int> *root, int level)
{
    if (level == 1)
    {
        cout << root->data << endl;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        printLevelUsingRec(root->children.at(i), level - 1);
    }
}

void print(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ": ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children.at(i)->data << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        print(root->children.at(i));
    }
}

TreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter data: ";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    int n;
    cout << "Enter number of children for this node: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

int numNodes(TreeNode<int> *root)
{
    int answer = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        answer += numNodes(root->children.at(i));
    }
    return answer;
}

int sumNodes(TreeNode<int> *root)
{
    int answer = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        answer += sumNodes(root->children.at(i));
    }
    return answer;
}

TreeNode<int> *maxNode(TreeNode<int> *root)
{
    TreeNode<int> *answer = root;
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *childrenData = maxNode(root->children.at(i));
        childrenData->data > answer->data ? answer->data = childrenData->data : answer->data = answer->data;
    }
    return root;
}

int numLeafNodes(TreeNode<int> *root)
{
    int count = 0;
    if (root->children.empty())
    {
        count += 1;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        count += numLeafNodes(root->children.at(i));
    }
    return count;
}

void deleteTree(TreeNode<int> *root)
{
    for (int i = 0; i < root->children.size(); i++)
    {
        deleteTree(root->children.at(i));
    }
    delete root;
}

int main()
{
    int level;
    cin >> level;
    printLevelUsingRec(takeInputLevelWise(), level);
    // print(takeInput());
}