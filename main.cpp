#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>

#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

class Solution {
public:
  bool hasEvenDigits(int x) {
    return ((x >= 10) && (x < 100)) ||
        ((x >= 1000) && (x < 10000)) ||
        ((x >= 100000) && (x < 1000000)) ||
        ((x >= 10000000) && (x < 100000000));
  }
  int findNumbers(vector<int> &nums) {
    int count = 0;
    for (auto x : nums) {
      if (hasEvenDigits(x))
        ++count;
    }
    return count;
  }
};

void test1() {
  vector<int> nums{12, 345, 2, 6, 7896};

  cout << "2 ? " << Solution().findNumbers(nums) << endl;
}

void test2() {

}

void test3() {

}