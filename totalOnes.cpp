class Solution {
public:
	// ����һ�����Ķ�������ʽ���ж��ٸ���1������λ
	int totalOnes(int n) {
		int count = 0;
		while (n) {
			n = n & (n - 1);
			count++;
		}
		return count;
	}
����