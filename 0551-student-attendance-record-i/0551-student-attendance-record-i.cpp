class Solution {
public:
    bool checkRecord(string s) 
    {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            if(i != 0 && i != s.size()-1)
            {
                if(s[i] == 'L' && s[i-1] == 'L' && s[i+1] == 'L')
                    return false;
            }
        }
        for(auto x: mp)
        {
            if(x.first == 'A' && x.second >= 2)
                return false;
        }

        return true;
    }
};