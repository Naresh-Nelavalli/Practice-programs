#include <iostream>
#include <cstring>

using namespace std;

bool isInCharString (string *str1, string *search);

int main ()
{
  if (isInCharString("The Quick Brown Fox Jumped Over The Lazy Dog!", "Lazy"))
    cout << "It is here!" << endl;
  return 0;
}

bool isInCharString (string *str1, string *search)
{
  for (int i = 0; i < strlen(str1); ++i)
  {
    if (strncmp (&str1[i], search, strlen(search)) == 0)
      return true;
  }

  return false;
}
