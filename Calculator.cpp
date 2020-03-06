//
// Created by Utilisateur on 06/03/2020.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int add(int a, int b){
    return a + b;
}

int remove(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

int divi(int a, int b){
    return a / b;
}

void isImpair(int nb){
    if(nb%2 != 0){
        cout << "\n Impair ! \n\n ";
    }
    else{
        cout << "\n Pair ! \n\n ";
    }
}

void fibo(int a, int b, int range){
    vector<int> results;
    int c, more_range;
    bool end = false;
    string user_input;
    int i = 1;

    do {
        for ( i; i <= range; i++ ) {
            c = a + b;
            a = b;
            b = c;
            results.push_back(b);
        }

        cout << "\n Resultats: \n \n";
        for(int content : results)
        {
            cout << content << "\n";
        }

        cout << "\n Continuer ? (yes / no): ";
        cin >> user_input;

        if(user_input == "yes"){
            cout << "\n Combien d'iteration suplementaire voulez-vous ? ";
            cin >> more_range;
            range += more_range;
        }
        else
        {
            cout << "\n Fin de la suite.\n\n";
            end = true;
        }

    } while (end == false);
}

void myAddress(int value){
    cout << "\n Adresse de la variable: " << value << " : " << &value << "\n\n";
}

void myValue(int* value){
    cout << "\n Valeur de l'adresse: " << &value << " : " << *value << "\n\n" ;
}

void swap(int *a, int *b){
    cout << "\n Avant swap, a : " << *a << endl;
    cout << "Avant swap, b : " << *b << endl;
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "Apres swap, a : " << *a << endl;
    cout << "Apres swap, b : " << *b << "\n\n";
}

void swapTab(int param[], int range, int *a, int *b){
    cout << "Dans le tableau contenant " << 10 << " nombres:\n";
    cout << "Le plus petit est: " << *a << "\n";
    cout << "Le plus grand est: " << *b << "\n";

    //j'ai pas tous compris

   /* cout << "Les nombre(s) de params : \n";
    for (int i = 0; i < range ; ++i) {
        cout << param[i] <<"\n";
    }

    vector<int> tabmin;
    cout << "SIZE : "<< tabmin.size() << "\n";
    vector<int> tabmax;
    for (int i = 0; i < range ; ++i) {
        if(tabmin.size() < *a){
            tabmin.push_back(param[i]);
            sort(tabmin.begin(), tabmin.end());
        } else{
            for (int nb : tabmin){
                if(nb < param[i]){
                    replace(tabmin.begin(), tabmin.end(), nb, param[i]);
                }
            }
        }

        if(tabmax.size() < *b){
            tabmax.push_back(param[i]);
            sort(tabmax.begin(), tabmax.end());
            reverse(tabmax.begin(), tabmax.end());
        } else{
            for (int nb : tabmax){
                if(nb > param[i]){
                    replace(tabmax.begin(), tabmax.end(), nb, param[i]);
                }
            }
        }
    }

    cout << "Les " << *a << " nombre(s) le(s) plus petit :\n";
    for (int nb : tabmax){
        cout << nb <<"\n";
    }

    cout << "Les " << *b << " nombre(s) le(s) plus grand :\n";
    for (int nb : tabmin){
        cout << nb <<"\n";
    }*/
}

void addMyTab(int *array){
    int nb, i = 0;
    int *ptr = array;
    cout << "Veuillez entrer 5 nombres.\n";
    do {
        cout << "\n Nombre " << i+1 << ": ";
        cin >> nb;
        *(ptr + i) = nb;
        i++;
    } while (i < 5);

    for (int j = 0; j < 5 ; ++j) {
        cout << array[j] <<"\n";
    }
}