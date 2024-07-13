#include <iostream>
#include <string>

using namespace std;

void exploreCave();
void followPath();
void fightMonster();
void runAway();
void talkToVillagers();
void exploreVillage();

int main() {
    int choice;
    cout << "You wake up in a mysterious forest. Do you want to:" << endl;
    cout << "1. Explore a nearby cave" << endl;
    cout << "2. Follow a path" << endl;
    cout << "Enter 1 or 2: ";
    cin >> choice;

    if (choice == 1) {
        exploreCave();
    } else if (choice == 2) {
        followPath();
    } else {
        cout << "Invalid choice. Game over." << endl;
    }

    return 0;
}

void exploreCave() {
    int choice;
    cout << "You enter the cave and encounter a monster. Do you want to:" << endl;
    cout << "1. Fight the monster" << endl;
    cout << "2. Run away" << endl;
    cout << "Enter 1 or 2: ";
    cin >> choice;

    if (choice == 1) {
        fightMonster();
    } else if (choice == 2) {
        runAway();
    } else {
        cout << "Invalid choice. Game over." << endl;
    }
}

void followPath() {
    int choice;
    cout << "You follow the path and find a village. Do you want to:" << endl;
    cout << "1. Talk to the villagers" << endl;
    cout << "2. Explore the village" << endl;
    cout << "Enter 1 or 2: ";
    cin >> choice;

    if (choice == 1) {
        talkToVillagers();
    } else if (choice == 2) {
        exploreVillage();
    } else {
        cout << "Invalid choice. Game over." << endl;
    }
}

void fightMonster() {
    cout << "You bravely fight the monster and defeat it. You find a treasure chest filled with gold. You win!" << endl;
}

void runAway() {
    cout << "You run away safely but find nothing of interest. You decide to return home. Game over." << endl;
}

void talkToVillagers() {
    cout << "The villagers tell you about a hidden treasure in the forest. You follow their directions and find the treasure. You win!" << endl;
}

void exploreVillage() {
    cout << "While exploring the village, you find a hidden path leading to a treasure. You win!" << endl;
}
