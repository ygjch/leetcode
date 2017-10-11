class Solution {
public:
    int romanToInt(string s) {
        int res=0,flag=0;
        unordered_map<char,int> number_map = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        if(s.length()==1){
            res = number_map[s[0]];
        }
        else {
            for(int i=1;i<s.length();i++){
                if(number_map[s[i]]>number_map[s[i-1]]){
                    res=res+number_map[s[i]]-number_map[s[i-1]];
                }
                else {
                    if(i==1){
                        res=res+number_map[s[i]]+number_map[s[i-1]];
                    }
                    else{
                        res+=number_map[s[i]];
                    }
                }
            }
        }
        return res;
    }
};

/*
input: MCMXCVI
ouput: 1996
*/