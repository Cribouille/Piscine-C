#include <unistd.h>
int main()
{
  char a;

  a = 'a';
  write(1, &a, 1);
  return(0);
}
