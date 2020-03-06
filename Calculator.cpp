//
// Created by Utilisateur on 06/03/2020.
//

#include <iostream>
#include <vector>

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

bool isImpair(int nb){
    if(nb%2 != 0){
        return true;
    }
    else{
        return false;
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
            cout << "\n Fin de la suite.";
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

void swapTab(int param[]){

}