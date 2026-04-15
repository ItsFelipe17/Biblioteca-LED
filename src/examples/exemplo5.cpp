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
Led ledA(15);
void setup()
{

}

void loop()
{
ledA.piscar(30);//Ao mandar o ledA piscar, dentro do parênteses coloco 30 como frequência, equivalente a 30 hertz.
ledB.piscar(20,50;)//Ao mandar o ledB piscar, dentro do parênteses coloco 30 como frequência e 50 repetições.
LedB.ligar()//Então após as 50 repetições, o ledB vai ficar ligado.
ledA.update();//update() É OBRIGATÓRIO uso do update no loop, para funcionar o sistema.    
ledB.update();//update() É OBRIGATÓRIO uso do update no loop, para funcionar o sistema.    
}