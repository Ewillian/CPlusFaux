#include <iostream>
#include "Calculator.h"
#include <cstdint>


using namespace std;

int main(int argc, char *argv[]) {
    string actions[12];
    int to_fill[5];
    int user_answer, nb1, nb2, nb3, nb4, nb5, range;

    actions[0] = "Additionner        | [1]";
    actions[1] = "Soustraire         | [2]";
    actions[2] = "Multiplier         | [3]";
    actions[3] = "Diviser            | [4]";
    actions[4] = "Impair ?           | [5]";
    actions[5] = "Suite de Fibonacci | [6]";
    actions[6] = "Valeur -> Adresse  | [7]";
    actions[7] = "Adresse -> Valeur  | [8]";
    actions[8] = "Swap               | [9]";
    actions[9] = "Swap Tab           | [10]";
    actions[10] = "Ajouter 5 nombres  | [11]";
    actions[11] = "Exit               | [12]";

    cout << "Bienvenue ! \n\n----------------8<-------------[ cut here ]------------------\n\nVeuillez selectionner l'action a faire : \n";

    while (true)
    {
        for(string name : actions)
        {
            cout << name << "\n";
        }

        cin >> user_answer;

        if(user_answer == 1){
            cout << "Quels sont les deux nombres que vous voulez additionner ?\n \nNombre 1: ";
            cin >> nb1;
            cout << "\nNombre 2: ";
            cin >> nb2;
            cout << "\nResultat: " << add(nb1, nb2) << "\n \n";
        }else if (user_answer == 2)
        {
            cout << "Quels sont les deux nombres que vous voulez soustraire ?\n \nNombre 1: ";
            cin >> nb1;
            cout << "\nNombre 2: ";
            cin >> nb2;
            cout << "\nResultat: " << remove(nb1, nb2) << "\n \n";
        }else if (user_answer == 3)
        {
            cout << "Quel sont les deux nombres a multiplier ?\n \nNombre 1: ";
            cin >> nb1;
            cout << "\nNombre 2: ";
            cin >> nb2;
            cout << "\nResultat: " << mult(nb1, nb2) << "\n \n";
        }else if (user_answer == 4)
        {
            cout << "Quel est le nombre à verifier ?\n \nNombre: ";
            cin >> nb1;
        }else if (user_answer == 5)
        {
            cout << "Quel est le dividende (nombre divisé)? ";
            cin >> nb1;
            cout << "Quel est le diviseur (nombre qui divise)? ";
            cin >> nb2;
            cout << "\nResultat: " << divi(nb1, nb2) << "\n \n";
        }else if (user_answer == 6)
        {
            cout << "\n Combien d'iteration voulez vous ? ";
            cin >> range;
            cout << "\n Nombre 1: ";
            cin >> nb1;
            cout << "\n Nombre 2: ";
            cin >> nb2;
            fibo(nb1, nb2, range);
        }else if (user_answer == 7)
        {
            cout << "Entrez votre nombre : ";
            cin >> user_answer;
            myAddress(user_answer);
        }else if (user_answer == 8)
        {
            int test = 56;
            myValue(&test);
        }else if (user_answer == 9)
        {
            cout << "Entrez vos 2 entiers : ";
            cout << "\n Entier 1: ";
            cin >> nb1;
            cout << "\n Entier 2: " ;
            cin >> nb2;
            swap(&nb1, &nb2);
        }else if (user_answer == 10)
        {
            int mytab[10] = {2, 156 , 48 , 45 , 96 , 25 , 14 , 7 , 5 , 63};
            int nb1 = mytab[0];
            for(int i=0; i<10; i++) {
                if(nb1 > mytab[i]) {
                    nb1 = mytab[i];
                }
            }
            int nb2 = mytab[0];
            for(int i=0; i<10; i++) {
                if(nb1 < mytab[i]) {
                    nb1 = mytab[i];
                }
            }

            swapTab(mytab, sizeof(mytab), &nb1, &nb2);

        }else if (user_answer == 11)
        {
            addMyTab(to_fill);
        }else if (user_answer == 12)
        {
            cout << "Au Revoir\n";
            exit(0);
        }else
        {
            cout << "Veuillez entrer une valeur correcte ?\n";
        }

    }
    cin.ignore();
}