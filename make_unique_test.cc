#include <iostream>

#include "make_unique.hh"

int
main()
{

  std::unique_ptr<int> x{new int(1)};
  std::unique_ptr<int[]> y{new int[4]{1,2,3,4}};
  std::unique_ptr<int[]> z{new int[100]{1,2,3,4}};

  auto a = std::make_unique<int>(1);
  auto b = std::make_unique<int[]>(1,2,3,4);
  auto c = std::make_unique<int[100]>(1,2,3,4);
  auto d = std::make_unique<int[100]>();
  //auto e = std::make_unique<int[1]>(1,2,3,4); // static_assert

  c[90] = 9;
  d[90] = 9;

  std::cout << *a << std::endl;
  std::cout << b[0] << " " << b[1] << std::endl;
  std::cout << c[0] << " " << c[80] << " " << c[90] << std::endl;
  std::cout << d[0] << " " << d[80] << " " << d[90] << std::endl;

  return 0;
}

