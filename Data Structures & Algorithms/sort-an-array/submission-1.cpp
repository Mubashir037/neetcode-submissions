class Solution {
public:

    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums,0,nums.size()-1);
        return nums;
    }
    int partition(vector<int>& arr, int low, int high) {
    // 1. Pick a random index between low and high
    int random_pivot_idx = low + rand() % (high - low + 1);
    
    // 2. Swap the random pivot element to the end of the range
    swap(arr[random_pivot_idx], arr[high]);
    
    int pivot = arr[high]; // The pivot value
    int i = low - 1;       // Index of the smaller element

    // 3. Move elements smaller than the pivot to the left
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    // 4. Place the pivot in its correct sorted position
    swap(arr[i + 1], arr[high]);
    return i + 1; // Return the pivot's new index
}
    void quickSort(vector<int>&nums,int low,int high)
    {
        if (low<high)
        {
            int pivot_idx=partition(nums,low,high);
        quickSort(nums, low, pivot_idx - 1);
        quickSort(nums, pivot_idx + 1, high);

        }
    }
};