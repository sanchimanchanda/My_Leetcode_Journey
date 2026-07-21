class Solution {
public:
    int count_bits(int nums) {
        int count = 0;
        while (nums != 0) {
            count += (nums & 1);
            nums >>= 1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        auto lambda = [&](int& a, int& b) {
            int countA = count_bits(a);
            int countB = count_bits(b);

            if (countA == countB) {
                return a < b;
            }
            return countA < countB;
        };
        sort(begin(arr), end(arr), lambda);
        return arr;
    }
};