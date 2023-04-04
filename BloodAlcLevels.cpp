#include <iostream>
#include <iomanip>
// Alkohol in Gramm/(Gewicht∗60%−(0.15∗Zeit seit Konsum)

float Blutalkohol(float alcohol, float weight,float t) {
    float bloodalc = (alcohol/(weight*0.6)) - (0.15*t);
    return bloodalc;

}
int main() {
    float alcohol;
    float weight;
    float t;

    std::cout<<"Alcohol in grams:"<<std::endl;
    std::cin>>alcohol;
    std::cout<<"Weight"<< std::endl;
    std::cin>> weight;
    std::cout<<"Time since last use:"<< std::endl;
    std::cin >> t;
    // Blutalkoholspiegel bei gleichbleibendem Alkoholpegel aber sich änderndem Gewicht
    for (int i = 0; i < 5; i++) {
        weight  += 10.0; // jedes Mal um 10 kg erhöhen
        double level = Blutalkohol(alcohol,weight, t );
        std::cout << "Gewicht: " << weight << " kg, Blutalkoholspiegel: " << std::setprecision(3)<< level << std::endl;
    }

    return 0;
}
