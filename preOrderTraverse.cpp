class Solution {
public:
	// 前序遍历
	void preOrderTraverse(vector<int>& res, Node* root) {
		if (root == NULL) return;
		res.push_back(root->val);
		// 有多个孩子
		int size = root->children.size();
		for (int i = 0; i < size; i++)
			preOrderTraverse(res, root->children[i]);
	}
｝；