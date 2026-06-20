class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>mp = {{']','['}, {')','('}, {'}', '{'}};

        stack<char> st;

        for(char c: s){
            if(!mp[c]){
                st.push(c);
            }else {
                if(st.empty())return 0;

                if(st.top()==mp[c])st.pop();
                else return 0;
            }
        }

        return st.empty();
    }
};
