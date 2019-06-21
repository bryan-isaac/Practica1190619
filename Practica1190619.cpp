#include<iostream>
#include<math.h>
using namespace std;
int suma;
class mundo{
    public:
    void hola(){ 
        int arre1[7];
        for(int i=0;i<7;i++){
            cout<<"ingrese el numero a sumar"<<endl;
            cin>>arre1[i];
        }
        for(int i=0;i<7;i++){ 
        suma+=arre1[i]; 
        }
        cout<<"la suma es "<<suma<<endl;
    } 
};   
int main(){
    mundo metodo4;
    metodo4.hola();
return 0;
}