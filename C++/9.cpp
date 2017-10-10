class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0&&x<10) return true;
        else if(x<0||x%10==0) return false;
        else {
            int p=x;
            long long res = 0;
            while(x){
                res=res*10+x%10;
                x/=10;
            }
            if(p==res)return true;
            else return false;
        }
    }
};