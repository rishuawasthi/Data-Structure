class Solution {
public:
    bool check(int target, vector<int> nums) {
        return (find(nums.begin(), nums.end(), target) != nums.end());
    }
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int, vector<int>> mp;
        int len = reservedSeats.size();
        for (auto it : reservedSeats) {
            mp[it[0]].push_back(it[1]);
        }
        int count = 0;
        int emptyRows = n - mp.size();
        count += emptyRows * 2;
        for (auto it : mp) {
            if (!check(4, it.second) && !check(5, it.second) &&
                !check(6, it.second) && !check(7, it.second)) {
                if (!check(2, it.second) && !check(3, it.second) &&
                    !check(8, it.second) && !check(9, it.second)) {
                    count += 2;
                } else {
                    count++;
                }
            } else if (!check(2, it.second) && !check(3, it.second) &&
                       !check(4, it.second) && !check(5, it.second)) {
                count++;
            } else if (!check(8, it.second) && !check(9, it.second) &&
                       !check(6, it.second) && !check(7, it.second)) {
                count++;
            }
        }
        return count;
    }
};