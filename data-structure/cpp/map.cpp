#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> nums, int target) {
    vector<int> ans;
    for (int i = 0; i < (int)nums.size() - 1; i++) {
        for (int j = i + 1; j < (int)nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;  // 最初に見つかった組を返す
            }
        }
    }
    return ans;  // 見つからなければ空を返す
}

vector<int> solution2(vector<int> nums, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];
        auto it = mp.find(need);
        if (it != mp.end()) {
            return {it->second, i};
        }
        // 値 -> index
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 10;
    // 1) ブルートフォース（動作確認済み）
    auto ans1 = solution(nums, target);
    if (ans1.size() == 2) {
        cout << "solution: " << ans1[0] << " " << ans1[1] << "\n";
    } else {
        cout << "solution: not found\n";
    }

    // 2) ハッシュ表を使った高速解
    auto ans = solution2(nums, target);
    if (ans.size() == 2) {
        cout << "solution2: " << ans[0] << " " << ans[1] << "\n";
    } else {
        cout << "solution2: not found\n";
    }
    return 0;
}