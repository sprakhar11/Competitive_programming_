class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();

        vector<string> ans;

        if( n == 0)
        {
            return ans;
        }
        
        vector<vector<string>> v;
        for(int i = 0 ; i < n; i++)
        {
            int dig = stoi(digit[i]);
            vector<string> tmp

            if( dig == 2)
            {
                tmp.push_back("abc");
            }
            if( dig == 3)
            {
                tmp.push_back("def");
            }
            if( dig == 4)
            {
                tmp.push_back("ghi");
            }
            if( dig == 5)
            {
                tmp.push_back("jkl");
            }
            if( dig == 6)
            {
                tmp.push_back("mno");
            }
            if( dig == 7)
            {
                tmp.push_back("pqrs");
            }
            if( dig == 8)
            {
                tmp.push_back("tuv");
            }
            if( dig == 9)
            {
                tmp.push_back("wxyz");
            }

            v.push_back(tmp);

        }

        for(int i = 0; i < v[0].length() ; < i++)
        {
            
        }

    }
};