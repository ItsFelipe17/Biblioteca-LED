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
/**
 * @brief Nome dado ao dispositivo de entrada.
*/  
uint8_t pinBotaoA= 0;

void setup() 
{

}

void loop() 
{
static bool estadoAnteriorBotaoA;
/**
 * Colocamos em loop a leitura do estado atual do botão.
 */  
bool estadoAtualBotaoA = digitalRead(pinBotaoA); 

/**
 *Usamos esse if para o botão só identificar o click após solta-lo.
 */
if(estadoAtualBotaoA && !estadoAnteriorBotaoA)

/**
 * Após soltar o botão, ele ligará o led por 2 segundos e vai desligar logo em seguida.
 */
ledA.ligar(2000);
  estadoAnteriorBotaoA = estadoAtualBotaoA;

ledA.update();//update() É OBRIGATÓRIO uso do update no loop, para funcionar o sistema 
}