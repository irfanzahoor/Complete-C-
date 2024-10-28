// Structures, Unions & Enums in C++

#include <iostream>
using namespace std;

typedef struct players{
    int num;
    char favChar;
    float score;
} pl;

int main(){
    
    // struct players IrfanZahoor; 
    pl IrfanZahoor;  //typedef lga k player ki jgha sirf ep b likh skty hain
    IrfanZahoor.num=20;
    IrfanZahoor.favChar='a';
    IrfanZahoor.score=169;

    cout<<"Fav Number of IrfanZahoor is "<<IrfanZahoor.num<<endl;
    cout<<"FavChar of IrfanZahoor is "<<IrfanZahoor.favChar<<endl;
    cout<<"Score of IrfanZahoor is "<<IrfanZahoor.score<<endl;

    return 0;
}