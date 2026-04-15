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
LedA.ligar(); //Vai ligar o Led. 
static bool estadoAnteriorBotaoA;
/**
 * Colocamos em loop a leitura do estado atual do botão.
 */  
bool estadoAtualBotaoA = digitalRead(pinBotaoA); 

/**
 *Usamos esse if para o botão só identificar o click após solta-lo.
 */
if(!estadoAtualBotaoA && estadoAnteriorBotaoA)

/**
 * Após pressionar o botão o Led começará a alternar entre, ligar e desligar.
 */
ledA.alternar();
  estadoAnteriorBotaoA = estadoAtualBotaoA;

ledA.update();//update() É OBRIGATÓRIO uso do update no loop, para funcionar o sistema.    
}