#include <unistd.h>
int main()
{
  write(1, "0123456789", 10);
  return(0);
}
