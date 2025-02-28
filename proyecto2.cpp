#include <iostream>

using namespace std;

void menuG(){

    cout<<"Bienvenido a Ramirez Shop"<<endl;
    cout<<"Op 1 => Artistas"<<endl;
    cout<<"Op 2 => Instrumentos"<<endl;
    cout<<"Op 3 => Monitores de Sonido"<<endl;
    cout<<"Op 4 => Ver Carrito"<<endl;
    cout<<"Op 5 => Salir de la tienda y ver costo a pagar"<<endl;


}


void menuA(){
    cout<<"Bienvenido a la seccion de Artistas";
    cout<<"¿Que artista deseas seleccionar?"<<endl;
    cout<<"Op 1 => Alfredo Olivas $25,000"<<endl;
    cout<<"Op 2 => Grupo Firme $25,000"<<endl;
    cout<<"Op 3 => Juntos $20,000"<<endl;
    cout<<"Op 4 => Julion Alvares $20,000"<<endl;
    cout<<"Op 5 => Tigres del Norte $15,000"<<endl;

}


void menuI(){

    cout<<"Bienvenido a la seccion de Instrumentos";
    cout<<"¿Que instrumento deseas seleccionar?"<<endl;
    cout<<"Op 1 => Acordeon Honner $50,000"<<endl;
    cout<<"Op 2 => Bateria $40,000"<<endl;
    cout<<"Op 3 => Guitarra $20,000"<<endl;
    cout<<"Op 4 => Bajo Sexto $10,000"<<endl;
    cout<<"Op 5 => Saxofon $100,000"<<endl;

}


void menuM(){
    cout<<"Bienvenido a la seccion de Luz y Sonido";
    cout<<"¿Que tipo de luz y/o sonido deseas seleccionar?"<<endl;
    cout<<"Op 1 => Luces Led $5,000"<<endl;
    cout<<"Op 2 => Pantallas Led $40,000"<<endl;
    cout<<"Op 3 => Microfono $1000"<<endl;
    cout<<"Op 4 => Equipo de Sonido $10,000"<<endl;
    cout<<"Op 5 => Monitores (In Ears) $5,000"<<endl;
}



int main() {
    int precio_final = 0;
    char FinalizarC;
    int opcion_C = 0;
    int Producto = 0;
    int carrito = 0;

    // carrito = 25000
    //carrito = 25000 + 15000


    cout<<"Deseas Comprar Productos? (S = Si / N = No)"<<endl;
    cin>>FinalizarC;


    while (FinalizarC == 's' || FinalizarC == 'S')
    {
    


        while (opcion_C != 5)
        {

            menuG();
    
            // system("clear");  Limpia la pantalla 
        
            


    
            cout<<"¿Que opcion deseas seleccionar ? "<<endl;
            cin>>opcion_C;
        
    
            if (opcion_C == 1){

                menuA();
    
            
    
                for(char seguir_CA = 's'; seguir_CA = 'n';){
    
                    int Artista = 0;
                    cout<<"Que Artista deseas Comprar"<<endl;
                    cin>>Artista;

                    
                    switch (Artista)
                    {
                        case 1:
                            cout<<"Felicidades Seleccionaste a Alfredo Olivas"<<endl;
                            cout<<"Con un costo de $25,000"<<endl;
                            carrito += 25000;
                            break;
                        case 2:
                            carrito += 25000;
                            break;
                        case 3:
                            carrito += 20000;
                            break;
                        case 4:
                            carrito += 20000;
                            break;
                        case 5:
                            carrito += 15000;
                            break;
    
                
                    }
    
                    cout<<"Deseas Seleccionar Otro Artista? (s = Si / n = Salir)" <<endl;
                    cin>>seguir_CA;
                    if (seguir_CA == 'n'){
                        seguir_CA = 'n';
                        break;
                    }
    
    
    
    
                }
    
            }// if artistas 

            if (opcion_C == 2){
    
                menuI();
    
                for(char seguir_CA = 's'; seguir_CA = 'n';){
    
                    int Instrumentos = 0;
                    cout<<"Que Instrumentos deseas Comprar"<<endl;
                    cin>>Instrumentos;
                    
                    switch (Instrumentos)
                    {
                        case 1:
                            carrito += 50000;
                            break;
                        case 2:
                            carrito += 40000;
                            break;
                        case 3:
                            carrito += 20000;
                            break;
                        case 4:
                            carrito += 10000;
                            break;
                        case 5:
                            carrito += 100000;
                            break;
    
                
                    }
    
                    cout<<"Deseas Seleccionar Otro Instrumento? (s = Si / n = Salir)" <<endl;
                    cin>>seguir_CA;
                    if (seguir_CA == 'n'){
                        seguir_CA = 'n';
                        break;
                    }
    
    
    
    
                }
    
            }// if Instrumentos 

            if (opcion_C == 3){
    
                menuM();
    
                for(char seguir_CA = 's'; seguir_CA = 'n';){
    
                    int Luz = 0;
                    cout<<"Que Luz y/o sonido deseas Comprar"<<endl;
                    cin>>Luz;
                    
                    switch (Luz)
                    {
                        case 1:
                            carrito += 5000;
                            break;
                        case 2:
                            carrito += 40000;
                            break;
                        case 3:
                            carrito += 1000;
                            break;
                        case 4:
                            carrito += 10000;
                            break;
                        case 5:
                            carrito += 5000;
                            break;
    
                
                    }
    
                    cout<<"Deseas Seleccionar Otro tipo de Luz / Sonido? (s = Si /n = Salir)" <<endl;
                    cin>>seguir_CA;
                    if (seguir_CA == 'n'){
                        seguir_CA = 'n';
                        break;
                    }
    
    
    
    
                }
    
            }// if Luz y sonido 
    

        

            if (opcion_C == 4)
            {
                cout << "Tu total hasta ahora es de = " << carrito << endl;
                cout << "Presiona Enter para salir del carrito...";
                cin.ignore(); // Evita que se borre muy rapido la consola
                cin.get(); // Espera a que el usuario presione Enter
            }
            

            if (opcion_C == 5)
            {
                string mp;
                precio_final = carrito;
                int tarjeta = 0;
                int cambio = 0;
                int ef = 0;

                cout<<"El total de Tu compra es = " <<precio_final <<endl;
                cout<<"Ingresa tu metodo de pago"<<endl;
                cout<<"Tarjeta , Efectivo"<<endl;
                cin>>mp;
                cout<<"Tu metodo de pago es "<<mp<<endl;

                if (mp == "Tarjeta" || mp == "tarjeta") {
                    cout << "Has seleccionado pago con tarjeta." << endl;
                    tarjeta = precio_final ;
                    cambio = precio_final - precio_final;
                    cout<<"Compra realizada con exito"<<endl;
                    cout<<"Tu cambio es de"<<cambio<<endl;


                }

                else if (mp == "Efectivo" || mp == "efectivo") {
                    cout << "Has seleccionado pago en efectivo." << endl;
                    cout<<"Ingresa la cantidad a pagar"<<endl;
                    cin>>ef;
                    cambio = ef - precio_final;

                    if(ef > precio_final){
                        cout<<"Compra realizada con exito"<<endl;
                        cout<<"Gracias....."<<endl;

                    }

                    else{
                        cout<<"No se puede realizar la compra intenta de nuevo"<<endl;
                        cin>>ef;
                        cambio = ef - precio_final;
    
                        if(ef > precio_final){
                            cout<<"Compra realizada con exito"<<endl;
                            cout<<"Gracias....."<<endl;

                        }
                        
                    }


                } 
                
                else {
                    cout << "Método de pago no reconocido." << endl;
                }



            }
            
            







    
        } //Salimos del primer while

        cout<<"Deseas Seguir comprando? (S = Continuar / N = Salir)"<<endl;
        cin>>FinalizarC;
    }

    cout<<"Gracias por tu compra"<<endl;



    
    return 0;
}