#include "fruitjuice.h"
#include <iostream>

using namespace std;


int main()
{
    Juice fruitchoice;
    int options;
    char decision;


    do {
            fruitchoice.intro();
            cin >> options;
            switch(options)
            {
                case 1:
                    fruitchoice.apple();
                    break;
                case 2:
                    fruitchoice.orange ();
                    break;
                case 3:
                    fruitchoice.mango();
                    break;
                case 4:
                    fruitchoice.fruitpunch();
                    break;

                default:
                    cout << "You have entered the wrong number" << endl;

            }
                fruitchoice.promptUser();
                cin >> decision;

        }while('y'==decision||'Y'==decision);
                cout << "\n\t\t\t\tThe program has ended" ;




}
