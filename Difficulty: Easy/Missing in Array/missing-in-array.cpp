class Solution {
public:
    int missingNum(vector<int>& arr) {

        long long n = arr.size();

        long long totalSum = (n + 1) * (n + 2) / 2;

        long long arrSum = 0;
        for (int i = 0; i < n; i++) {
            arrSum += arr[i];
        }

        return (int)(totalSum - arrSum);
    }
};
