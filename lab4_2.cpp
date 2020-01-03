#include<iostream>
#include<cmath>
using namespace std;

//Write function findDistance() here

float findDistance(float u,float a,float t){
  float s = (u*t)+(0.5*a*(pow(t,2)));
  return s;

}

int main(){

  float u,a,t;

  cout << "Enter u = ";
  cin >> u;
  cout << "\n";
  cout << "Enter a = ";
  cin >> a;
  cout << "\n";
  cout << "Enter t = ";
  cin >> t;
  cout << "\n";
  cout << "Distance = " << findDistance(u,a,t);




  //Calling findDistance() using test cases

  return 0;
}
