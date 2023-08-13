#include <iostream>
#include <ctime>
using namespace std;

class Player {
    public:
        string name;
        short hp = 180;
        short maxHp = 180;
        short xp = 0;
        short maxXp = 100;
        short level = 1;
        short power = 10;
        short defend = 10;
        short speed = 5;
        short hpEnemy = 200;
        bool gameOver = false;

        Player(string name)
        {
            this->name = name;
            do{
                command();
            } while (gameOver == false);
        }

        void command ()
        {
            display();
            string theCommend;
            std::cout << "command : ";
            std::cin >> theCommend;
            if (theCommend == "attack_e")
            {
                int c;
                c = (1+rand()%6)*10;
                attackEnemy(c);
            }
            if (theCommend == "attack_h")
                attackHero();

        }

        void display()
        {
             cout << endl;
             cout << "Nama\t\t:" << name << endl;
             cout << "Health\t\t:" << hp << endl;
             cout << "XP\t\t:" << xp << endl;
             cout << "Level\t\t:" << level << endl;
             cout << "Power\t\t:" << power << endl;
             cout << "Defend\t\t:" << defend << endl;
             cout << "Speed\t\t:" << speed << endl;
        }

        void attackEnemy(short parameterAttack)
        {
            this->hp = hp - parameterAttack + this->defend;
            if(this->hp == 0)
            {
                this->gameOver = true;
                cout << "\n\nGame Over!!!" << endl;
            }
        }

        void attackHero()
        {
            this->hpEnemy -= this->power*speed;
            this->xp+=30;
            if (this->hpEnemy == 0)
            {
                this->xp+=30;
                if(this->xp  >= this->maxXp)
                {
                    std::cout << "Level Up!!!" <<std::endl;
                    this->level += 1;
                    this->hp = 0;
                    this->maxXp = this->maxXp * this->level;
                }
            }
            std::cout << "\nAttacking..." << std::endl;
        }

};

int main()
{
    Player p1{"Player satu"};

    return 0;
}
