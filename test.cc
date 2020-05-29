#include <iostream>

extern "C" void for_sub_(int *, double *, double *, int *);

int main() {
  int i=1, ny=3;
  double x=3.14159;
  double y[]={1.1, 2.2, 3.3};
  std::cout << "C calling Fortran subroutine, passing\n";
  std::cout << "i = " << i << " " << "x = " << x << "\n";
  std::cout << "y = " << y[0] << " " << y[1] << " " << y[2] << "\n" ;

  /* for_sub_(&i, &x, y, &ny);  */
  std::cout << "Hello, world!\n";
  for_sub_(&i, &x, y, &ny);


  return 0;
}
