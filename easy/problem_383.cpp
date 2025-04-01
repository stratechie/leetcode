class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mapping;

        for (auto& m : magazine)
        {
            mapping[m] += 1;
        }

        for (auto& r : ransomNote)
        {
            if (mapping[r] == 0)
            {
                return false;
            }

            mapping[r] -= 1;
        }

        return true;
    }
};