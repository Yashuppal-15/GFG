class Solution {
public:
    void quickSort(vector<int>& arr, int low, int high) {

        // Base case
        if (low >= high) {
            return ;
        }

        int pivot = high;
        int i = low - 1;
        int j = low;

        while (j < pivot) {
            if (arr[j] < arr[pivot]) {
                i++;
                swap(arr[i], arr[j]);
            }
            j++;
        }

        i++;
        swap(arr[i], arr[pivot]);

        // Recursive call karlo left part ke liye
        quickSort(arr, low, i-1);

        // Recursive call karlo right part ke liye
        quickSort(arr, i+1, high);
    }

public:
    int partition(vector<int>& arr, int low, int high) {
        // GFG requires this function, but logic is already
        // implemented inside quickSort as per your notebook
        return 0;
    }
};
