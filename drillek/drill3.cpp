#include "std_lib_facilities.h"
int main()
{
//Elso feladat
cout <<"Adja meg a cimzett Keresztnevet:\n";
string first_name;
cin >> first_name;
cout <<"Hello  " <<first_name<< "!\n";
//Masodik feladat
cout <<"Hogy vagy? Reg lattalak mar. Remelem remekul vagy.\n";
//Harmadik feladat
cout <<" Add meg a barátod nevét: \n";
string friend_name;
cin>> friend_name;
cout <<"Találkoztál mostanság "<< friend_name << " -val?\n";
//Negyedik feladat
char friend_sex = 0;
do
{
cout <<" Add meg a baratod nemet. Irj egy 'm'-et ha fiu, irj egy 'f'-et ha lany \n";
cin >> friend_sex;
}
while(friend_sex != 'f' && friend_sex !='m');
if (friend_sex == 'f')
 cout <<"If you see " <<friend_name<< " please ask her to call me !\n";
if (friend_sex == 'm')
 cout <<"If you see" <<friend_name<< "  please ask him to call me !\n";
//Itt azert angol mert a 'him' és a 'her' a lényeg
//Otodik Feladat
int age;
cout << "Hany eves vagy?\n";
cin >> age;
if (age > 0 && age < 110)
{
cout << " Azt hallottam hogy szuletesnapod volt es te most "<< age << "  eves vagy.\n";
}
else
{
cout << "Ugye te most viccelsz velem?\n";
}
//Hatodik Feleadat
if (age < 12)
{
cout <<" Jovore " << age + 1 << "  eves leszel!\n";
}
else if (age == 17)
{
cout << "Gratulalok, jovore mehetsz szavazni!\n";
}
else if (age > 70)
{
cout << "Remelem elvezed a nyugdijas eveid!\n";
}
//Magyarorszagon meg lentebb van a nyugdij hatar
//Hetekdik feladat
cout << "Udvozlettel, \n\n\n Sores Peter Gergo";
}
