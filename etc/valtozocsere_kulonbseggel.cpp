#include <iostream>
int main()
{
int elso;
int masodik;
std::cout << "elso erteket kerek: ";
std::cin >> elso;
std::cout << "masodik erteket kerek: ";
std::cin >> masodik;
elso+= masodik;
masodik = elso-masodik; 
elso= elso-masodik; 
std::cout << "az ertekek : " << elso << "\nb es :" << masodik;
}
