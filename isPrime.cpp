class Solution {
public:
	// �ж�һ�����Ƿ�Ϊ����
	bool isPrime(int n) {
		// ��Щ��Ŀ��Ҫ�� 1 ��Ϊ����
		// if(n == 1) return false;
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) return false;
		}
		return true;
	}
����