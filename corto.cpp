#include <iostream>
using namespace std;
int main(void){
    int edad;
    int genero;
    int numero;
    int bille=300;
    cout<<"digite su edad.\n";
    cin>>edad;
    if(edad<=10)
      cout<<"su talla recomendada es 8";
    else if(edad>=11 && edad<=15)
     cout<<"su talla recomenda es 12";
     else if(edad>=16 && edad<=60)
     cout<<"su talla recomendada es 16";
     else if(edad>=61)
     cout<<"su talla recomendada es 18";
 cout<<"digite su genero masculino=1, femenino=2 y mostrar todo=9";
 cin>>genero;
 switch (genero)
 {
 case 1: 
 cout<<"Para Hombre (descuento del 30%):";
 cout<<"1. Camisa Casual: $90 ($63).";
 cout<<"2.Pantalón Formal: $130 ($91)."; 
 cout<<"3. Chaqueta Premium: $900 ($630)";
    cout<<"seleccione la prenda que quiere comprar";
    cin>>numero;
      switch(numero){
        case 1:
      bille=bille-63;
       cout<<"Su compra se ha realizado de forma exitosa su saldo es de: " <<bille;   

     break;
      case 2:
     bille=bille-91;
     cout<<"Su compra se ha realizado de forma exitosa su saldo es de: " <<bille;   
     break; 
     case 3:
         bille=bille-630;
       cout<< "su compra se ha realizado de forma exitosa su saldo es de:"<<bille;

       break;
      }
case 2:
 cout<<"Para Mujer (descuento del 20%):";
 cout<<"1. Blusa Moderna: $80 (64).";
 cout<<"2. Falda Elegante: $110 (88)."; 
 cout<<"3. Abrigo Premium: $250 (200)";
     cout<<"seleccione la prenda que quiere comprar";
    cin>>numero;
      switch(numero){
        case 1:
      bille=bille-64;
       cout<<"Su compra se ha realizado de forma exitosa su saldo es de: " <<bille;   

     break;
      case 2:
     bille=bille-88;
     cout<<"Su compra se ha realizado de forma exitosa su saldo es de: " <<bille;   
     break; 
     case 3:
         bille=bille-200;
       cout<< "su compra se ha realizado de forma exitosa su saldo es de:"<<bille;

       break;
      }
  break;
 
 case 9:
  cout<<"Para Hombre (descuento del 30%):";
 cout<<"1. Camisa Casual: $90 (descuento del 30%).";
 cout<<"2. Pantalón Formal: $130 (descuento del 30%)."; 
 cout<<" 3. Chaqueta Premium: $900 (descuento del 30%)";
 cout<<"-----------------------------------------------------------------------------";
 cout<<"Para Mujer (descuento del 20%):";
 cout<<"4. Blusa Moderna: $80 (descuento del 20%).";
 cout<<"5. Falda Elegante: $110 (descuento del 20%)."; 
 cout<<"6. Abrigo Premium: $250 (descuento del 20%)";
  cout<<"seleccione la prenda que quiere comprar.\n";
  cin>>numero;
 switch(numero){
        case 1:
      bille=bille-63;
       cout<<"Su compra se ha realizado de forma exitosa su saldo es de: " <<bille;   

     break;
      case 2:
     bille=bille-91;
     cout<<"Su compra se ha realizado de forma exitosa su saldo es de: " <<bille;   
     break; 
     case 3:
         bille=bille-630;
       cout<< "su compra se ha realizado de forma exitosa su saldo es de:"<<bille;
    
       break;
               case 4:
      bille=bille-64;
       cout<<"Su compra se ha realizado de forma exitosa su saldo es de: " <<bille;   

     break;
      case 5:
     bille=bille-88;
     cout<<"Su compra se ha realizado de forma exitosa su saldo es de: " <<bille;   
     break; 
     case 6:
         bille=bille-200;
       cout<< "su compra se ha realizado de forma exitosa su saldo es de:"<<bille;

       break;
      }
    break;
 }


    
    return 0;
}