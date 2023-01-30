#include"easy_list.h"

using namespace std;

void itc_even_index_list (const vector <int> &mass, vector <int> &mass2){ //1 +
    for(int i = 0; i < mass.size(); i++){
        if (i % 2 == 0){
            mass2.push_back(mass[i]);
        }
    }
}

void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2){ //2
    int a = 0;
    for(int i = 0; i < mass.size(); i++){
        if (i % 2 == 0){
            mass2[a] = mass[i];
            a++;
        }
    }
}

int itc_positive_list(const vector <int> &mass){ //3
    int kolvo = 0;
    for(int i = 0; i < mass.size(); i++){
        if(mass[i] % 2 == 0)
            kolvo++;
    }
    return kolvo;
}
