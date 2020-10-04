#include <unistd.h>

int main()
{
  write(1, "Hello", 5);
  return 0;
}
