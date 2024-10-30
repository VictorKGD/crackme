#include <iostream>

int main()
{
  char password[20];
  char correct_password[] = "secret123";

  std::cout << "Enter a password: ";
  std::cin >> password;

  if (strcmp(password, correct_password) == 0)
  {
    std::cout << "Access granted!\n";
  } else
  {
    std::cout << "Access Denied\n";
  }

  system("pause");
  return 0;
}
