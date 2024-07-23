class Solution{
public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int merged[n + m];
        int i = 0, j = 0, l = 0;

        // Merge the two arrays
        while (i < n && j < m) {
            if (arr1[i] < arr2[j]) {
                merged[l++] = arr1[i++];
            } else {
                merged[l++] = arr2[j++];
            }
        }

        // If there are remaining elements in arr1
        while (i < n) {
            merged[l++] = arr1[i++];
        }

        // If there are remaining elements in arr2
        while (j < m) {
            merged[l++] = arr2[j++];
        }
        
   return merged[k-1];
      
    }
};
