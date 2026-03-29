#ifndef __VEC_H_
#define __VEC_H_
#include <algorithm>
#include <cstddef>

template <typename T>
class Vec {
private:
  std::size_t _capacity{};
  std::size_t _size{};
  T* _arr = nullptr;

public:
  Vec() = default;

  Vec(std::size_t capacity, T initial_val)
      : _capacity(capacity), _size(capacity), _arr(new T[capacity]) {
    // set initial value
    std::fill(_arr, _arr + _size, initial_val);
  }

  ~Vec() {
    delete[] _arr;
  }

  std::size_t capacity() const {
    return _capacity;
  }

  std::size_t size() const {
    return _size;
  }

  void push(const T& value) {
    if (_size < _capacity) {
      _arr[_size] = value;
      _size++;
    } else {
      std::size_t new_capacity = _capacity != 0 ? _capacity * 2 : 1;
      _capacity = new_capacity;

      T* temp = new T[new_capacity];
      std::copy(begin(), end(), temp);
      std::swap(temp, _arr);
      delete[] temp;

      _arr[_size] = value;
      _size++;
    }
  }

  T& operator[](std::size_t index) {
    return _arr[index];
  }

  T* begin() {
    return _arr;
  }

  T* end() {
    return _arr + _size;
  }
};

#endif
