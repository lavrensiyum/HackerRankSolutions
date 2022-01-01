#include <iostream>
using namespace std;

int main() {

    int uzunluk, sayi;

    cin >> uzunluk;
    
    //Create the array with the size the user input
    int *myArray = new int[uzunluk];

    // gelen verileri diziye yazdir
    for(int i=0; i<uzunluk+1; i++){
        cin >> sayi;
        myArray[i] = sayi;

    }

    // dizideki verileri ters yazdir:
    for(int i=uzunluk-1; i>=0; i--){
        cout << myArray[i] << " ";
    }

    return 0;
}
