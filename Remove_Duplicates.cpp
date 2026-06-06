#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) {
        return 0;
    }

    int uniqueIndex = 0;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[uniqueIndex]) {
            uniqueIndex++;
            nums[uniqueIndex] = nums[i];
        }
    }

    return uniqueIndex + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};

    int k = removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}