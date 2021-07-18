////https://www.youtube.com/watch?v=86g8jAQug04

#include <bits/stdc++.h>

using namespace std;

struct Node{
	int val;
	struct Node* left;
	struct Node* right;
	
	Node(int x){
		val = x;
		left = right = NULL;
		};
}typedef Node;

class Solution {
public:
    vector<int> levelOrderTraversal(Node* root){
		
        vector<int> bfs;
        if(root == NULL)
			return bfs;
        queue<Node*> q;
        q.push(root);
        while(q.empty() == false){
			
            Node* curr = q.front();
            
            bfs.push_back(curr->val);
            if(curr->left)
				q.push(curr->left);
            if(curr->right)
				q.push(curr->right);
			q.pop();
        }
        return bfs;
        
    }
};

int main(){
	struct Node* root = new Node(1);
	root->right = new Node(3);
	root->left = new Node(2);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	
	Solution object;
	
	vector<int> bfs;
	
	bfs = object.levelOrderTraversal(root);
	
	
	for(int i=0; i<int(bfs.size()); i++)
		cout<< bfs[i] << " ";
		
	}
