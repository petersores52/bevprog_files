#include <iostream>
int main()
{
int elso;
int masodik;
std::cout << "elso erteke: ";
std::cin >> elso;
std::cout << "masodik erteke: ";
std::cin >> masodik;
elso*= masodik;
masodik= elso/masodik;
elso= elso/masodik;
std::cout << "az elso uj erteke: " << elso  << "\nb a masodik uj erteke: " << masodik;
}
