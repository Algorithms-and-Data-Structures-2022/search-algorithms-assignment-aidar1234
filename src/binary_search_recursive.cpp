//
// Created by ramil on 14.04.2022.
//

#include "assignment/binary_search_recursive.hpp"

namespace assignment {

  std::optional<int> BinarySearchRecursive::Search(const std::vector<int>& arr, int search_elem) const {
    // запускаем рекурсивный метод с границами поиска от начала массива до конца
    return search(arr, search_elem, 0, static_cast<int>(arr.size() - 1));
  }

  std::optional<int> BinarySearchRecursive::search(const std::vector<int>& arr, int search_elem, int start, int stop) const {

    // Tips:
    // 1. Рассмотрите базовые случаи выхода и рекурсии:
    //    1) индекс левого элемента стал больше индекса правого элемента
    //    2) целевой элемент найден
    // 2. Вызовите рекурсивный метод, изменив границы поиска
    //    в зависимости от неравенства между элементом посередине и целевого элемента

    if (start > stop) {
      return std::nullopt;
    }

    int index = (start + stop) / 2;
    int median = arr[index];
    if (median == search_elem) {
      return index;
    }
    if (median < search_elem) {
      return search(arr, search_elem, index+1, stop);
    }
    else if (median > search_elem) {
      return search(arr, search_elem, start, index-1);
    }
  }

}  // namespace assignment
