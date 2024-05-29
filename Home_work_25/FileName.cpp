#include <iostream>
#include <string>

// Задача 2.

bool polindrome(std::string str) {
	for (int i = 0; i < str.size(); i++)
		str[i] = std::tolower(str[i]); // Изменить на нижний регистр 
	std::string reversed;
	for (int i = str.length() - 1; i >= 0; i--)  // отражаем слово
		reversed += str[i];
	for (int i = 0; i < str.size(); i++) {
		if (str != reversed)
			return false;
	}
}
// Задача 3.

 int punctuation(std::string str) {
	int count = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?') {
			count++;
		}
	}
	return count;
}

 // Задача 4.

 std::string index(std::string str, char sym) {
	 for (int i = 0; i < str.length(); i++) {
		 if (str[i] == sym)
			 return str.substr(str.rfind(sym));
	 }
	 std::string str2;
	 return str2;
 }
 
 

int main() {
	system("chcp 1251>null");

	// Задача 1.

	std::string str = "Hello world!";
	std::cout << "Задача 1.\nВведите символ для поиска -> ";
	char sym;
	std::cin >> sym;

	std::string result;
	
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			result += sym;

	std::cout << result << std::endl;
	

	// Задача 2.
	
	std::cout << " Задача 2.\nВведите слово -> ";
	std::string str1;
	std::getline(std::cin, str1);
	
	if (polindrome(str1)) 
		std::cout << str1 << " - полиндром!\n";
	else
		std::cout << str1 << " - не полиндром!\n";
	
	// задача 3.
	
	std::cout << " Задача 3.\nВведите строку -> ";
	std::string str1;
	std::getline(std::cin, str1);
	std::cout << punctuation(str1) << std::endl;
	
	//Задача 4.

	std::cout << " Задача 4.\nВведите строку -> ";
	std::string str1;
	std::getline(std::cin, str1);
	char sym;
	std::cout << "Введите символ -> ";
	std::cin >> sym;

	std::cout << index(str1, sym) << std::endl;
	
	return 0;
}