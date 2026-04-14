#ifndef LED_h
#define LED_h

#include <Arduino.h>

// metodo:ações
// propriedade: Caracteristicas, adjetivos

/**
 * @class Led
 * @brief Classe para controle não bloqueante de um LED.
 * Permite ligar, desligar, ligar por tempo determinado,
 * piscar continuamente e piscar por quantidade definida.
 *
 * @note O metodo update() deve ser chamado continuamente dentro do loop().
 */
class Led
{
private:
    uint8_t pino;
    bool estado; // atributo
    bool desligarPorTempo = false;
    uint32_t desligarNoMomento;

    uint32_t tempoAnteriorPiscar;
    uint32_t tempoEspera;
    bool estadoPiscar;
    uint16_t repeticoes;
    /**
     *@brief Processa a lógica de piscada do LED.
     */
    void funcaoPiscar();
    /**
     * @brief Processa o desligamento temporizado.
     */
    void funcaoDesligamento();

public:
    /**
     * @brief Constroi um objeto Led.
     * @param pin Número do pino digital onde o Led está conectado.
     */
    Led(uint8_t pin);

    /**
     * @brief Liga o LED continuamente.
     */
    void ligar();

    /**
     * @brief Liga o LED por um tempo determinado.
     * @param tempoLigado_ms Tempo, em millisegundos, que o LED ficará ligado.
     */
    void ligar(unsigned long tempoLigado_ms);

    /**
     * @brief Desliga o LED e cancela os modos automáticos.
     */
    void desligar();

    /**
     * @brief Inicia a piscada contínua em 1hz.
     */
    void piscar();
    /**
     * @brief Pisca o LED uma quantidade definida de vezes.
     * @param frequencia Frequência da piscada em hertz
     */
    void piscar(float frequencia);

    /**
     * @brief Pisca o LED uma quantidade definida de vezes.
     * @param frequencia Frequência da piscada em hertz
     * @param repeticoes Quantidade de piscadas completas
     */
    void piscar(float frequencia, uint16_t repeticoes);

    /**
     * @brief Retorna o estado do LED.
     */
    bool getEstado();

    /**
     * @brief Retorna o estado do pino.
     */
    uint8_t getPino();

    /**
     * @brief Altera o estado do Led.
     * @param estado true para ligado, false para desligado.
     */
    void setEstado(bool estado);

    /**
     *@brief Alterna o nível lógico do Led.
     */
    void alternar();

    /**
     *@brief Atualiza constantemente os processos do Led.
     */
    void update();
};

#endif