class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int note_5 = 0;
        int note_10 = 0;
        int note_20 = 0;
        for (int it : bills) {
            if (it == 5)
                note_5++;
            else if (it == 10) {
                if (note_5 > 0)
                    note_5--;
                else
                    return false;
                note_10++;

            } else {
                if (note_10 > 0 && note_5 > 0) {
                    note_10--;
                    note_5--;
                    note_20++;
                } else if (note_5 >= 3) {
                    note_5 -= 3;
                    note_20++;
                } else
                    return false;
            }
        }
        return true;
    }
};