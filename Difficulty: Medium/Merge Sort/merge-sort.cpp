class Solution {
  public:

    // Merge Two Sorted Array Function (Merge two sorted array)
    void mergeTwoSortedArray(vector<int>& arr, int start, vector<int>& left, vector<int>& right, int lenLeft, int lenRight){
        // left and right part array are already sorted
        int leftIndex = 0;
        int rightIndex = 0;
        int mainArrayIndex = start; // Yeh Catch hai Yanha galti hone ke chance hai

        while(leftIndex < lenLeft && rightIndex < lenRight){
            if(left[leftIndex] < right[rightIndex]){
                arr[mainArrayIndex] = left[leftIndex];
                mainArrayIndex++;
                leftIndex++;
            }
            else{
                arr[mainArrayIndex] = right[rightIndex];
                mainArrayIndex++;
                rightIndex++;
            }
        }

        // Case 01: Left array exhaust but right array me abhi bhi element bache hue hai
        while(rightIndex < lenRight){
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }

        // Case 02: Right array exhaust but left array me abhi bhi element bache hue hai
        while(leftIndex < lenLeft){
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
    }

    // Merge Function
    void merge(vector<int>& arr, int start, int end, int mid){
        // Step 01: find the length of left and right part array
        int lenLeft = mid - start + 1;
        int lenRight = end - (mid + 1) + 1;

        // Step 02: create left and right part array
        vector<int> left(lenLeft);
        vector<int> right(lenRight);

        // Step 03: copy value from original array to left and right part array
        int k = start;
        // copy value from original array to left array
        for(int i = 0; i < lenLeft; i++){
            left[i] = arr[k];
            k++;
        }

        // copy value from original array to right array
        for(int i = 0; i < lenRight; i++){
            right[i] = arr[k];
            k++;
        }

        // Step 04: write actual logic to merge left and right sorted array
        mergeTwoSortedArray(arr, start, left, right, lenLeft, lenRight);
    }

    // Merge Sort (Divide and conquer algorithm)
    void mergeSort(vector<int>& arr, int start, int end){
        // Base Case
        if(start > end){
            // Invalid Array
            return;
        }
        if(start == end){
            // Single element array
            return;
        }

        // Step 01: Find mid and break the original array into two equal part
        int mid = start + (end - start) / 2;

        // Step 02: Recursion call for sorting left and right part
        // Recursive call for left part
        mergeSort(arr, start, mid);
        // Recursive call for right part
        mergeSort(arr, mid + 1, end);

        // Step 03: Merge two sorted arrays
        merge(arr, start, end, mid);
    }
};
