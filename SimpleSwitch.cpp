#include <iostream>
using namespace std;
int main() {
    int n;
    char x;
    cout << "Bitte geben Sie ein Integer an:" << endl;
    cin>>n;
    switch(n) {
        case 4:
            cout << "Banane" << endl;
            break;
        case 5:
            cout << "Tomate" << endl;
            break;
        case 6:
            cout << "Spitzkohl" << endl;
            break;
        case 7:
            cout << "Apfel" << endl;
            break;
        case 8:
            cout << "Birne" << endl;
            break;

        default:
            cout << "nichts gefunden" << endl;
            break;


    }
    cout<<"Bitte geben Sie ein Char an:"<<endl;
    cin>>x;
    switch(x){
        case 'a':
           cout<<57<<endl;
           break;
           
        case 'A':
            cout<<67<<endl;
            break;

        case'b':
            cout<< 37 <<endl;
            break;

        case 'D':
            cout<<87<<endl;
            break;

        default:
            cout << "nichts gefunden" << endl;
            break;

    }
    return 0;
}
