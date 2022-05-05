#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair

    int left = 0;
    int right = data.size()-1;

    while (left <= right) {
      int cur_sum = data[left] + data[right];
      if (cur_sum == sum) {
        return std::make_pair(left, right);
      }
      if (cur_sum > sum) {
        right--;
      }
      else {
        left++;
      }
    }

    return std::nullopt;
  }

}  // namespace assignment