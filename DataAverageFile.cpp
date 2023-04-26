#include <iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

void write(float max, string fileName){
    ofstream out(fileName);
    for (int i=0; i<= max; i++){
        out<<i<<endl;
    }
}

float read(string filename){
    ifstream in(filename);
    vector<float>v;
     if(in){
         string line ;
         while(getline(in, line)){
             v.push_back(stoi(line));
         }
     }


    float sum = 0;
    for (int i = 0; i <v.size(); i++) {
        sum += v[i];
    }
    float avg = sum / v.size();

    return avg;
}


int main() {
    int max;
    string filename;
    cout<<"Please enter a max number here"<<endl;
    cin>>max;
    filename = "examples.txt";
    write(max, filename);
    float avg = read(filename);
    cout<<"Average: "<< avg <<endl;
    return 0;
}
