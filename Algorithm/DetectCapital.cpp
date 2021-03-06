////////////////////////////////////////////////////////////////////
//  给定一个单词，你需要判断单词的大写使用是否正确。
//  我们定义，在以下情况时，单词的大写用法是正确的：
//  全部字母都是大写，比如"USA"。
//  单词中所有字母都不是大写，比如"leetcode"。
//  如果单词不只含有一个字母，只有首字母大写， 比如 "Google"。
//  否则，我们定义这个单词没有正确使用大写字母。
/////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/detect-capital/description/
/////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    bool detectCapitalUse(string word)
    {
        if (word.size() <= 1)
        {
            return true;
        }
        
        for (int i = 1; i < word.size(); i++)
        {
            if (word[0] >= 65 && word[0] <= 90)
            {
                if (word[1] >= 65 && word[1] <= 90)
                {
                    if (word[i] >= 97 && word[i] <= 122)
                    {
                        return false;
                    }
                }
                else if (word[1] >= 97 && word[1] <= 122)
                {
                    if (word[i] >= 65 && word[i] <= 90)
                    {
                        return false;
                    }
                }
            }
            else if (word[0] >= 97 && word[0] <= 122)
            {
                if (word[i] >= 65 && word[i] <= 90)
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};
