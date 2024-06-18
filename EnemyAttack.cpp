// EnemyAttack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    bool isPlayerInRange;
    bool isPlayerAttacking;
    bool isPlayerDefending;
    int playerHealth;

    cout << "Enter player health: ";
    cin >> playerHealth;
    cout << endl << "Is player in range? ";
    cin >> isPlayerInRange;
    cout << endl << "Is player attacking? ";
    cin >> isPlayerAttacking;
    cout << endl << "Is player defending? ";
    cin >> isPlayerDefending;
    cout << endl;

    if (isPlayerInRange && !isPlayerAttacking) {
        cout << "The enemy should attack" << endl;
    }
    if (isPlayerInRange && isPlayerDefending) {
        cout << "The enemy should hold" << endl;
    }
    if (isPlayerInRange && playerHealth < 20 && isPlayerAttacking) {
        cout << "player should deliver a rage attack" << endl;
    }
    if (isPlayerInRange && !isPlayerDefending && playerHealth == 100 || playerHealth < 10) {
        cout << "enemy should do a special ability attack" << endl;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
