#include"easy_list.h"

using namespace std;

void itc_rev_list(vector <int> &mass){ //6
    int k;
    for(int i = mass.size(); i > 0; i++){
        k = mass[i-1];
        mass[i-1] = mass[i];
    }
}
