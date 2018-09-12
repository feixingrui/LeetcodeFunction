class Solution {
public:
	// 判断一个数是否为素数
	bool isPrime(int n) {
		// 有些题目会要求 1 不为素数
		// if(n == 1) return false;
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) return false;
		}
		return true;
	}
｝；