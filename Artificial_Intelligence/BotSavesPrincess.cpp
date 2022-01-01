#include <iostream>
using namespace std;

int main(){
    int izgaraBoyutu, prensKonumX, prensKonumY, prensesKonumX, prensesKonumY, sira=0; 
    string satir, periyot, test1{};

    cin >> izgaraBoyutu;
    string *myArray = new string[izgaraBoyutu];

  for(int i=0; i<izgaraBoyutu; i++){
    cin >> satir;
    myArray[i] = satir;
  }

    for(int i=0; i<izgaraBoyutu; i++){
        for(int j=0; j<izgaraBoyutu; j++){  
        
            string(test1) = myArray[i];
            string str(test1);
            char test2 = str.at(j);

            switch (test2){
                case '-':
                    break;
                case 'p':
                    prensesKonumX = j; prensesKonumY = i;
                    break;
                case 'm':
                    prensKonumX = i; prensKonumY = j;
                    break;
            }
        }
    }

    while(true){
        if(prensKonumY==prensesKonumY){
            break;
        }else{
            if(prensKonumY < prensesKonumY){
                cout << "DOWN" << endl;
                prensKonumY++;
            }else{
                cout << "UP" << endl;
                prensKonumY--;
            }
        }
    }

    while(true){
        if(prensKonumX==prensesKonumX){
            break;
        }else{
            if(prensKonumX < prensesKonumX){
                cout << "RIGHT" << endl;
                prensKonumX++;
            }else{
                cout << "LEFT" << endl;
                prensKonumX--;
            }
        }
    }
}