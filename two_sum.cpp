#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 4, 7, 11, 15};
    int target = 15;

    int left = 0;
    int right = nums.size() - 1;

    while(left < right) {
        int sum = nums[left] + nums[right];

        if(sum == target) {
            cout << nums[left] << " " << nums[right];
            return 0;
        }
        else if(sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    cout << "No pair found";
    return 0;
}

