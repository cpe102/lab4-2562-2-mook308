#include<iostream>
#include<cmath>
using namespace std;

int findDivisor(int x){
  int i = 2;
  while (i>1){
      if(x%i==0){
          return i;
      }else{
          i++;
      }
  }

}

int main(){
    int x;

    cout << "Enter number = ";
    cin >> x;
    cout << "\n";
    cout << "Divisor is " << findDivisor(x);

  

    return 0;
}
