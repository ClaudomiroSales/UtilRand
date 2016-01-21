#include <iostream>
using std::cin;
using std::cout;

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include "Rand.h"

int main(int argc, char **argv)
{
    
    Rand * rand_ = new Rand( );
    rand_->SetSeed( );
    
    cout << rand_->Uniform( ) << '\n';
  
    
    /*
    //Abaixo usando o Rand da biblioteca padrão
    ///////////////////////////////////////
    int idadedaDanny, iTentativa;
   
    // initialize random seed: //
    srand (time(NULL));
    
    // generate um número entre 1 e 25: //
    idadedaDanny = rand() % 25 + 1;
        
    
    do {
            cout << "Qual eh a idade da Danny: \n";
            cin >> iTentativa;
            if (idadedaDanny < iTentativa) 
                 cout << "A idade eh menor.\n";
            else if (idadedaDanny > iTentativa) 
                cout << "A idade eh maior.\n";
   } while (idadedaDanny != iTentativa);
    
    cout << "Parabens!\n";
    
    */
    
	return 0;
}
