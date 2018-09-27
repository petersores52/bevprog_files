#include <iostream>
int main()
{
int elso;
int masodik;
std::cout << "elso erteket kerem: ";
std::cin >> elso;
std::cout << "masodik erteket kerem: ";
std::cin >> masodik;
elso^= masodik;
masodik = elso^masodik;
elso = elso^masodik;
std::cout << "az uj elso ertek: " << elso << "\nb az uj masodik ertek: " << masodik;
}
