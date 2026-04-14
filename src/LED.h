#ifndef LED_h
#define LED_h

#include <Arduino.h>

// metodo:ações
// propriedade: Caracteristicas, adjetivos

class Led
{
private:
    uint8_t pino;
    bool estado; //atributo
    bool desligarPorTempo = false;
    uint32_t desligarNoMomento;
    
    uint32_t tempoAnteriorPiscar;
    uint32_t tempoEspera;
    bool estadoPiscar;
    uint16_t repeticoes;
    
    void funcaoPiscar();
    void funcaoDesligamento();



public:
    Led(uint8_t pin); // metodo construtor, devera ter o mesmo nome da classe

    void ligar();
    void ligar(unsigned long tempoLigado_ms);

    void desligar();

    void piscar();
    void piscar(float frequencia);
    void piscar(float frequencia, uint16_t repeticoes);

    bool getEstado();
    uint8_t getPino();

    void setEstado(bool estado);

    void alternar();

    void update();
};   

#endif