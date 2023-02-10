class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = arr[0];
        
        for(int i = 1 ; i < n; ++i){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        
        return max;
    }
};

//https://www.geeksforgeeks.org/program-to-find-largest-element-in-an-array/
