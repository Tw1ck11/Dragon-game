// Игра про дракона.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int dragon_hp, dragon_damage, spearman_hp, spearman_damage, number_of_spearmen;

    cout << R"(                  ____====-_  _-====____                  )" << "\n";
    cout << R"(            _--^^^      //      \\      ^^^--_            )" << "\n";
    cout << R"(          _-^          // (    ) \\          ^-_          )" << "\n";
    cout << R"(        _-            //  |\^^/|  \\            -_        )" << "\n";
    cout << R"(      _-             //   (0::0)   \\             -_      )" << "\n";
    cout << R"(     _-             ((     \\//     ))             -_     )" << "\n";
    cout << R"(    _-               \\    (oo)    //               -_    )" << "\n";
    cout << R"(   _-                 \\  / \/ \  //                 -_   )" << "\n";
    cout << R"(  _-                   \\/      \//                   -_  )" << "\n";
    cout << R"( / /|           /\      (        )      /\           |\ \ )" << "\n";
    cout << R"(| / | /\_/\_/\_/  \_/\  (   /\   )  /\_/  \_/\_/\_/\ | \ |)" << "\n";
    cout << R"( '  |/                \_(| |  | |)_/  v    '  v  v  \|  ' )" << "\n";
    cout << R"(    '                  / | |  | | \           '  '   '    )" << "\n";
    cout << R"(                     <(  | |  | |  )>                     )" << "\n";
    cout << R"(                    <__\_| |  | |_/__>                    )" << "\n";
    cout << R"(                    ^^^^ ^^^  ^^^ ^^^^                    )" << "\n";

    cout << endl << "NAME: Dragon" << endl;
    cout << "HP: ";
    cin >> dragon_hp;
    cout << "DAMAGE: ";
    cin >> dragon_damage;
    system("cls");

    cout << endl << "NAME: Spearman" << endl;
    cout << "HP: ";
    cin >> spearman_hp;
    cout << "DAMAGE: ";
    cin >> spearman_damage;
    cout << "NUMBER OF SPEARMEN: ";
    cin >> number_of_spearmen;
    system("cls");

    do {
        dragon_hp = dragon_hp - number_of_spearmen * spearman_damage;
        if (dragon_hp < 0) {
            dragon_hp = 0;
        }
        cout << "Spearmen attack (damage = " << number_of_spearmen * spearman_damage << "). Dragon has " << dragon_hp << " HP left." << endl;

        number_of_spearmen = ceil((number_of_spearmen * spearman_hp - dragon_damage) / spearman_hp);
        if (number_of_spearmen < 0) {
            number_of_spearmen = 0;
        }
        cout << "Dragon attacks (damage = " << dragon_damage << "). " << number_of_spearmen << " spearmen left." << "\n\n";

        Sleep(1000);

        if (dragon_hp == 0) {
            cout << "Spearmen are win" << endl;
            break;
        }
        else if (number_of_spearmen == 0) {
            cout << "Dragon is win" << endl;
            break;
        }

    } while (true);
}