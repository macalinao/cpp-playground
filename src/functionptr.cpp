#include <iostream>

int main() {
  std::function<void()> f_display_42 = []() {
    std::cout << 42 << std::endl;
  };
  f_display_42();

  // now throw npe...
  f_display_42 = nullptr;

  try {
    f_display_42();
  } catch(...) {
    std::cout << "we got an exception lul" << std::endl;
  }

  // and we can reassign this.
  f_display_42 = []() {
    std::cout << 42 << "masterrace" << std::endl;
  };
  f_display_42();
}
