/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
         vector<int> ans;
    if(!root)
    {return {};}
    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty())              
    {
       auto it =q.front();         
       q.pop();                      
        Node *node =it.first;      
        int line=it.second;         
        mp[line]=node->data;       //  0>a>d>f,-1>b,1>e,-2>c,2>g

        if(node->left)   q.push({node->left,line-1});

        if(node->right)  q.push({node->right,line+1});
        
        
    }
    for(auto it:mp)
    {
        ans.push_back(it.second);
    }
    return ans;
    }
};
