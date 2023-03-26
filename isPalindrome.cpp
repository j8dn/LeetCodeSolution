class Solution {
public:
    bool isPalindrome(std::string s) {
    std::string res;
    for (char c : s) 
        if (std::isalnum(c))
            res += std::tolower(c);
    std::string rev{res};
    std::reverse(rev.begin(),rev.end());
    if (res == rev)
        return true;
    else
        return false;
    }
};
