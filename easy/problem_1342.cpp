class Solution {
public:
    int numberOfSteps(int num) {
        int answer{};

        if (num % 2 != 0)
        {
            answer = 1;
            num = num - 1;
        }

        while (num)
        {
            if ((num / 2) % 2 != 0)
            {
                ++answer;
                num = num / 2 - 1;
            }
            else
            {
                num = num / 2;
            }
            ++answer;
        }

        return answer;;
    }
};