1957. Delete Characters to Make Fancy String

class Solution {
public:
    string makeFancyString(string s) {
        string result="";//declare string variable to store result

        for(int i=0;i<s.length();i++){//iterate through string
            int n = result.length();
            //check if last two char are same as curr
            if(n>=2 && result[n-1] == s[i] && result[n-2] == s[i]){
                continue;//to avoid consecutive char
            }
            result.push_back(s[i]);
        }
        return result;
    }
};