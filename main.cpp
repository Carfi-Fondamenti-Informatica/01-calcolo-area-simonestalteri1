#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
float a=0;
float b=0;
float c=0;
cin >> a >> b >> c;  
//Qui va scritto il codice per eseguire i calcoli richiesti
cout<<"l'area del triangolo vale: "<< endl;
cout<<(a*b)/2<<endl;
cout<<"l'area del quadrato vale: "<< endl;
cout<<(a*a)<<endl;
cout<<"l'area del rettangolo vale: "<< endl;
cout<<(a*b)<<endl;
cout<<"l'area del trapezio vale: "<< endl;
cout<<((a+b)*c)/2<<endl;
return 0;
}  
