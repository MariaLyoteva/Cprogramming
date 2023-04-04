#include <iostream>

using namespace std;
int main() {
 int arr[4] = {0,1,2,3};
 float f[4]={5.6, 1.2, 2.1, 3.2, };
 for(int i =0; i<4; i++){
     arr[i] = (int)f[i];
     std::cout<<arr[i]<<std::endl;
 }

    return 0;
}
