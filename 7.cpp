class Solution {
public:
    int reverse(int x) {
		int result = 0, i = 0;
		int flag = 0;
		int arr[20];
		if (x < 0) {
			x = -x;
			flag = 1;
		}
		while(x) {
			int k = x % 10;
			arr[i++] = k;
			x /= 10;
		}
		for(int j = 0; j < i; j++) {
			result = result * 10 + arr[j];
		}
		if (flag == 1) {
			result = -result;
		}
		return result;
    }
};