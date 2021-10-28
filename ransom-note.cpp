class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char,int> rmap;
        unordered_map<char,int> mmap;
        
        if(magazine.size() < ransomNote.size())
            return false;
        
        for(int i=0; i<ransomNote.size(); i++)
            rmap[ransomNote[i]]++;
        
        for(int i=0; i<magazine.size(); i++)
            mmap[magazine[i]]++;
        
        for(int i=0; i<ransomNote.size(); i++)
        {
            if(rmap[ransomNote[i]] > mmap[ransomNote[i]])
                return false;
        }
        
        return true;
    }
};
