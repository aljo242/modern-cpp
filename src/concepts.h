#ifndef _CONCEPTS_H
#define _CONCEPTS_H

#include <numeric>
#include <concepts>
#include <vector>

template <typename T>
requires std::integral<T> || std::floating_point<T>
constexpr double Average(std::vector<T> const &vec) {
  // accumulate starting with init value of 0
  const double sum = std::accumulate(vec.begin(), vec.end(), 0.0);
  return sum / double(vec.size());
}


double RunAverage();

#endif // _CONCEPTS_H
