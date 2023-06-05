#include <iostream>
#include <vector>
  
int main()
  {
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
  
  // Calculate the total using a for loop:
  int even = 0; 
  int odd = 1; 

  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers[i]%2 == 0)
    {
    even += numbers[i];
    }
    else
    {
    odd *= numbers[i];
    }
  }

  std::cout << "Sum of even numbers is " <<even<< ". \n";
  std::cout << "Product of odd numbers is " <<odd<< ". \n";
  
  return 0;
}
