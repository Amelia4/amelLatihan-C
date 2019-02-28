#include <iostream>
using namespace std;

int main() {

    unsigned int arr[200]={0,1},r,in;
    cout << " \t PROGRAM MENCARI SUKU BILANGAN DENGAN BILANGAN FIBONACCI " << endl;
    cout << " *^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^";
    cout << " \n Masukkan suku bilangan ke - ";
    cin  >> in;

        for ( r=2 ; r<in ; r++) {
            arr[r] = arr[r-1] + arr[r-2];
        }

        for ( r=0 ; r<in ; r++) {
            cout << arr[r] << " " ;
        }
    cout << endl << endl;
}
