class Solution {
public:
    char repeatedCharacter(string s) {
        int count[26]={0};
        for(char ch : s){
            if(count[ch - 'a']==1){
                return ch;
            }
            count[ch - 'a']++;
        }
        return ' ';

    }
};