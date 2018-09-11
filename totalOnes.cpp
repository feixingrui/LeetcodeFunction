class Solution {
public:
	// 计算一个数的二进制形式中有多少个“1”比特位
	int totalOnes(int n) {
		int count = 0;
		while (n) {
			n = n & (n - 1);
			count++;
		}
		return count;
	}
｝；