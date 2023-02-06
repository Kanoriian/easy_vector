#include"easy_list.h"

using namespace std;

void itc_even_index_list (const vector <int> &mass, vector <int> &mass2){ //1 +
    for(int i = 0; i < mass.size(); i++){
        if (i % 2 == 0){
            mass2.push_back(mass[i]);
        }
    }
}

void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2){ //2 +
    int a = 0;
    for(int i = 0; i < mass.size(); i++){
        if (mass[i] % 2 == 0){
            mass2[a] = mass[i];
            a++;
        }
    }
}

int itc_positive_list(const vector <int> &mass){ //3 -
    if(mass.size() == 0){
        return 0;
    }
    int kolvo = 0;
    for(int i = 0; i < mass.size(); i++){
        if(mass[i] % 2 == 0)
            kolvo++;
    }
    return kolvo;
}

int itc_sl_list(const vector <int> &mass){ //4 -
    if(mass.size() == 0){
        return 0;
    }
    int kol = 0;
    for(int i = 0; i < mass.size(); i++){
        if(mass[i] < mass[i+1])
            kol++;
    }
    return kol;
}

bool itc_same_parts_list(const vector <int> &mass){ //5 -
    if(mass.size() == 0){
        return 0;
    }
    int kol = 0;
    for(int i = 0; i < mass.size(); i++){
        if(mass[i] / mass[i] == mass[i+1] / mass[i+1])
            kol++;
    }
    return kol;
}

