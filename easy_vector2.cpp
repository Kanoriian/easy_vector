#include"easy_list.h"

using namespace std;

void itc_rev_list(vector <int> &mass){ //6
    int k;
    for(int i = mass.size(); i > 0; i++){
        k = mass[i-1];
        mass[i-1] = mass[i];
    }
}

void itc_rev_par_list(vector <int> &mass){ //7
    vector <int> mass2;
    int a = 1;
    for(int i = 0; i < mass.size(); i++){
        mass2[i] = mass[a];
        mass2[a] = mass[i];
    }
    mass = mass2;
}

void itc_rshift_list(vector <int> &mass){ //8
    vector <int> mass2;
    int a;
    for(int i = 1; i < mass.size() - 1; i++){
        a = i - 1;
        mass2[a] = mass[i];
    }
    mass2[0] = mass[a+2];
    mass = mass2;
}

vector <int> perfomans(vector <int> mass){ //7analog
    vector <int> mass2;
    int a = 1;
    for(int i = 0; i < mass.size(); i++){
        mass2[i] = mass[a];
        mass2[a] = mass[i];
    }
    mass = mass2;
    return mass;
}

void itc_super_shift_list(vector <int> &mass, int n){ //9
    if(n > 0){
        mass = perfomans(mass);
    }else{
        for(int i = 0; i < mass.size() - 1; i++){
            mass = perfomans(mass);
        }
    }
}
