#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& arr, int search_elem) const {

    int left = 0;
    int right = arr.size()-1;

    while (left <= right) {
      int index = (left + right) / 2;
      int median = arr[index];
      if (median == search_elem) {
        return index;
      }
      if (median < search_elem) {
        left = index+1;
      }
      else if (median > search_elem) {
        right = index-1;
      }
    }

    // Tips:
    // 1. Заведите две переменные: (а) индекс левой границы и (б) индекс правой границы.
    // 2. Поиск ведется пока индекс левой границы не превысил индекс правой.
    // 3. Каждую итерацию вычисляйте индекс середины внутри области, задаваемой индексами левой и правой границы.
    // 4. Рассмотрите 3 случая:
    //    1) Целевой элемент равен элементу посередине.
    //    2) Целевой элемент меньше элемента посередине (область поиска сокращается).
    //    3) Целевой элемент больше элемента посередине (область поиска сокращается).

    return std::nullopt;
  }

}  // namespace assignment