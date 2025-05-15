#include <iostream>
#include <vector>
#include <map>
#include <cctype>
using namespace std;

int level;

class Attack {
    public:
        int cost;
        int dmg;
        string name;
        Attack(string n, int d, int c): name(n), dmg(d), cost(c) {}
};
class Warrior {
    public:
        int maxhealth = 15*(level*1.5);
        int health = 15;
        int defense = 5;
        int stamina = 10;
        Attack attack1 = Attack("Strike", level, 1);
        Attack attack2 = Attack("Triumphant Blow", 3+level, 5);
        Attack attack3 = Attack("Castrate", 1, 20);
        Attack attack4 = Attack("Finish Him!", 999, 20);
};
class Warlock {
    public:
        int maxhealth = 10*(level*1.5);
        int health = 10;
        int defense = 2;
        int mana = 100;
        Attack attack1 = Attack("Wisp", level, 10);
        Attack attack2 = Attack("Fireball", 3+(2*level), 20);
        Attack attack3 = Attack("Demonic Restoration", 0, 30);
        Attack attack4 = Attack("Demon Skin", 0, 50);
};
class Priest {
    public:
        int maxhealth = 7*(level*1.5);
        int health = 7;
        int defense = 7;
        int mana = 50;
        Attack attack1 = Attack("Exorcism", 1, 1);
        Attack attack2 = Attack("Heal", 3, 5);
        Attack attack3 = Attack("Hammer of God", 0, 20);
        Attack attack4 = Attack("Greater Heal", 0, 30);
};
class Warrior {
    public:
        int maxhealth = 15*(level*1.5);
        int health = 15;
        int defense = 5;
        int stamina = 10;
        Attack attack1 = Attack("Strike", 1, 1);
        Attack attack2 = Attack("Triumphant Blow", 3, 5);
        Attack attack3 = Attack("Castrate", 1, 20);
        Attack attack4 = Attack("Finish Him!", 999, 20);
};
class Warrior {
    public:
        int health = 10;
        int defense = 5;
        int stamina = 10;
        Attack attack1 = Attack("Strike", 1, 1);
        Attack attack2 = Attack("Triumphant Blow", 3, 5);
        Attack attack3 = Attack("Castrate", 1, 20);
        Attack attack4 = Attack("Finish Him!", 999, 20);
};

bool combat(vector<int> enemy,vector<int> you) {

}

int main() {
    map<string,string> ClassAbbr;
    ClassAbbr["WA"] = "Warrior";
    ClassAbbr["WL"] = "Warlock";
    ClassAbbr["PR"] = "Priest";
    ClassAbbr["PL"] = "Paladin";
    ClassAbbr["DK"] = "Death Knight";
    int level = 1;
    string name;
    string adventurerClass;
    cout << "Greetings, adventurer! Please enter your name to begin." << endl;
    cin >> name;
    cout << "Welcome " << name << "!" << endl;
    cout << "Tell me, what class do you desire to be?" << endl;
    cout << "Classes are: " << endl;
    cout << "Warrior (Wa), Good all round damage dealer, but low defenses." << endl;
    cout << "Warlock (Wl), Glass cannon, deals lots of damage, but can't take much." << endl;
    cout << "Priest (Pr), Does Decent Damage, but can heal itself." << endl;
    cout << "Paladin (Pl), Holy Knight, a jack of all trades." << endl;
    cout << "Death Knight (DK), Play at your own risk." << endl;
    cout << "Please enter your preferred class, by the 2 letter abbreviation next to their names. (Remember to write it exactly as it says, case sensitive.)" << endl;
    cin >> adventurerClass;
    string actualAdventurerClass ="";
    for (char c : adventurerClass) {
        c = toupper(c);
        actualAdventurerClass += c;
    } 
    cout << "You are " << name << ", Level " << level << " " << ClassAbbr[actualAdventurerClass] << "!";
    int decision = 0;
    cout << "You enter a dark cavern, tales of immense treasure guarded by the evil, mythical lord Fagius. You enter the cavern and are greeted by a small purple creature." << endl;
    if (ClassAbbr[actualAdventurerClass]=="Paladin") {
        cout << "The foul creature speaks in an unholy tongue. It is incomprehensible to your trained ear. The creature initiates combat!";
    } else if (ClassAbbr[actualAdventurerClass]=="Death Knight") {
        cout << "The creature, which you recognize as one of your Kinsmen. He Attacks you, because of the well known fact that Death Knights may never leave the Cavern of Frostmourne!" << endl; 
    } else {
        cout << "What want you in our cavern, foreigner?" << endl;
        cout << "Says the Creature." << endl;
    }
}