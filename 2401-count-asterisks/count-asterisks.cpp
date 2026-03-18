class Solution {
public:
    int countAsterisks(string s) {
        int cnt  = 0;
        bool in = false;

        for(char ch : s)
        {
            if(ch == '|') in = !in;

            else if(ch == '*' && in == false) cnt++;
        }
        return cnt;
    }
};