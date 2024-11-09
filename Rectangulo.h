#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Figuras.h"

class Rectangulo : public Figuras {

    public:
        virtual void IngresarDatos() ;
        virtual float CalcularArea() ;
        virtual void MostrarResultados() ;

    private:
        float base;
        float altura;
};

#endif