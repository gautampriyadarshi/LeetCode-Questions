class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        string ans = "";
        stack<int> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                if(!st.empty())
                    ans = ans + "(";
                
                st.push(s[i]);
            }
            
            else
            {
                if(!st.empty())
                {
                    st.pop();
                    if(!st.empty())
                        ans = ans + ")";
                }
            }
        }
        return ans;
    }
};