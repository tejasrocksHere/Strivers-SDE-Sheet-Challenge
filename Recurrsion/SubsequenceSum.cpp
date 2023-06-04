#include<iostream>
#include<vector>

using namespace std;

void sum(int index, int currentSum, int arr[], int n, int target, vector<int>& ans) {
    if (index >= n) {
        if (currentSum == target) {
            // Print the subarray
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    // Include the current element in the subarray
    ans.push_back(arr[index]);
    currentSum=currentSum+arr[index];
    sum(index + 1, currentSum , arr, n, target, ans);
    currentSum=currentSum-arr[index];
    ans.pop_back();

    // Exclude the current element from the subarray

    sum(index + 1, currentSum, arr, n, target, ans);
}

int main() {
    int arr[4] = {1, 2, 1,3};
    int n = 4;
    int target = 3;
    vector<int> ans;
    sum(0, 0, arr, n, target, ans);

    return 0;
}
