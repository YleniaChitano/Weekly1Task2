#include <iostream>

std::string name;
int age;
std::string answer;

int main()
{
	std::cout << "What's your first name? ";
	std::cin >> name;
	std::cout << "How old are you? ";
	std::cin >> age;
	std::cout << "Do you drink coffe? ";
	std::cin >> answer;

	std::cout << "\nYour name is " << name << "\n";
	std::cout << "You are " << age << " years old.\n";

	
	if (answer == "yes") {
		std::cout << "It seems you like coffee\n";
	}
	else if (answer == "no") {
		std::cout << "Oh, you don't like coffee...\n";
	}
	else {
		std::cout << "I didn't understand whether you like coffee or not...\n";
	}

return 0;
}


