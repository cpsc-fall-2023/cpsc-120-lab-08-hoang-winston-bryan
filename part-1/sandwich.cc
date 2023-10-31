// Hoang Nguyen
// larva426426@csu.fullerton.edu
// @Hoang842
// Partners: @Bryanper24, @Wmond1712

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cout << "error: you must supply three arguments" << std::endl;
    return 1;
  }
  std::vector<std::string> arguments{argv, argv + argc};

  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << "."
            << "\n";

  return 0;
}
