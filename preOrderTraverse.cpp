class Solution {
public:
	// ǰ�����
	void preOrderTraverse(vector<int>& res, Node* root) {
		if (root == NULL) return;
		res.push_back(root->val);
		// �ж������
		int size = root->children.size();
		for (int i = 0; i < size; i++)
			preOrderTraverse(res, root->children[i]);
	}
����