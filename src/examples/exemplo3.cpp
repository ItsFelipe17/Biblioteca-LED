/*
Autor: Felipe de Oliveira
Programa:Exemplos no esp32
Descrição:ensinando como usar os objeto LED
Data: 15/04/2026
Versão: 1.0
*/
#include <Arduino.h>
#include <LED.h>

/**
 * @brief Nome dado ao dispositivo de saída.
 */
Led ledA(18);  

void setup()
{

}

void loop()
{
/**
 * Ao mandar o led piscar, dentro do parênteses coloco 1 como frequência e 10 como número de repetições.
 * Após piscar, ele vai ficar ligado pra sempre, até vc pressionar o botão reset.
 */
ledA.piscar(1, 10);
ledA.ligar();
ledA.update(); //update() É OBRIGATÓRIO uso do update no loop, para funcionar o sistema.    
}
