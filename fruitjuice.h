#ifndef FRUITJUICE_H
#define fRUITJUICE_H

#include <iostream>
using namespace std;

class Juice {

    public:
        void apple();
        void orange();
        void mango();
        void intro();
        void fruitpunch();
        void promptUser();

    private:
        int numberOfJuices;
        double apple_juice = 25.00, orange_juice = 25.00, mango_lassi = 30.00, fruit_punch = 50.00;
        double total;
};
void Juice::apple(){
        int payment,change;
        cout << "\t\t\t\tHow many:\n\t\t\t\t";
        cin >> numberOfJuices;
        total = numberOfJuices * apple_juice;
        cout << "\t\t\t\tTotal amount is:" << total << endl;
        cout << "\t\t\t\tEnter your Payment\n\t\t\t\t";
        cin >> payment;
        change = payment - total;
        cout << "\n\t\t\t\tYour Change:" << change << endl;
}
void Juice::orange(){
        int payment,change;
        cout << "\t\t\t\tHow many:\n\t\t\t\t";
        cin >> numberOfJuices;
        total = numberOfJuices * orange_juice;
        cout << "\t\t\t\tTotal amount is:" << total << endl;
        cout << "\t\t\t\tEnter your Payment\n\t\t\t\t";
        cin >> payment;
        change = payment - total;
        cout << "\n\t\t\t\tYour Change:" << change << endl;
}
void Juice::mango(){
        int payment,change;
        cout << "\t\t\t\tHow many:\n\t\t\t\t";
        cin >> numberOfJuices;
        total = numberOfJuices * mango_lassi;
        cout << "\t\t\t\tTotal amount is:" << total << endl;
        cout << "\t\t\t\tEnter your Payment\n\t\t\t\t";
        cin >> payment;
        change = payment - total;
        cout << "\n\t\t\t\tYour Change:" << change << endl;

}void Juice::fruitpunch(){
        int payment,change;
        cout << "\t\t\t\tHow many:\n\t\t\t\t";
        cin >> numberOfJuices;
        total = numberOfJuices * fruit_punch;
        cout << "\t\t\t\tTotal amount is:" << total << endl;
        cout << "\t\t\t\tEnter your Payment\n\t\t\t\t";
        cin >> payment;
        change = payment - total;
        cout << "\n\t\t\t\tYour Change:" << change << endl;

}
void Juice::intro(){
        cout << "\n\n\t\t\t\tJuice Machine\n";
        cout << "\n\t\t\t\t1.)Apple juice = 25.00 " << endl;
        cout << "\n\t\t\t\t2.)Orange juice = 25.00 " << endl;
        cout << "\n\t\t\t\t3.)Mango lassi = 30.00" << endl;
        cout << "\n\t\t\t\t4.)Fruit punch" << endl;
        cout << "\n\t\t\t\tPlease select a number that corresponds to your choice\n\t\t\t\t";

}void Juice::promptUser(){
        cout << "\t\t\t\tPlease enter Y[Yes] if you want to order again and N[No] if not:";

}




#endif // FRUITJUICE_H
