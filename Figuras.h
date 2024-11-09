#ifndef FIGURAS_H
#define FIGURAS_H

class Figuras{
public:
    virtual void ingresarDatos() = 0;       
    virtual double calcularArea() = 0;      
    virtual double calcularVolumen() = 0;   
    virtual void mostrarResultados() = 0;   
    virtual ~Figuras() = default;  
};
#endif 
