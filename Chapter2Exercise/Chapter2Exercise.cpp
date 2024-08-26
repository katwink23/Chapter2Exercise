
// Name: Katlyn Winkelhake
// Date: Aug 2024
// Assignment: Write a program that defines an integer variable named age and a float variable named weight.
//Store your age and weight, as literals, in the variables.The program should display these values on
//the screen in a manner similar to the following :
//My age is 26 and my weight is 120 pounds
// Branch: Checkpoint_2.20

#include <iostream>

int main()
{
	int Age;
	float Weight;

	std::cout << "What is your age?";
	std::cin >> Age;
	std::cout << "What is your weight?";
	std::cin >> Weight;
	std::cout << "Your age is " << Age << " and your weight is " << Weight;

}
