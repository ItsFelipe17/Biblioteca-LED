💡 Biblioteca LED (Arduino/ESP32)

Essa biblioteca foi criada para facilitar o controle de LEDs em projetos com Arduino IDE de forma simples e eficiente, sem travar o código com delay().

A ideia é deixar tudo mais organizado usando orientação a objetos, enquanto o microcontrolador continua livre para executar outras tarefas ao mesmo tempo.

✨ O que você pode fazer
Ligar e desligar o LED facilmente
Ligar por um tempo específico (ex: 500ms)
Fazer o LED piscar com frequência personalizada
Definir quantas vezes ele vai piscar
Alternar o estado (ótimo para usar com botão)

Além disso, sempre que você chama um novo comando, ele interrompe o anterior automaticamente, evitando conflitos.

🛠️ Como funciona

Por trás dos panos, a biblioteca usa millis() ao invés de delay(), o que significa que tudo funciona de forma não-bloqueante.

Ela também usa uma espécie de controle de estados, garantindo que o LED sempre responda corretamente ao último comando.

📂 Principais métodos
ligar() → liga o LED
ligar(ms) → liga por um tempo e desliga sozinho
desligar() → desliga tudo
alternar() → troca o estado atual
piscar(freq) → começa a piscar continuamente
piscar(freq, n) → pisca um número específico de vezes
update() → mantém tudo funcionando (chame no loop())
🔑 Importante

Você precisa chamar update() dentro do loop() — é isso OBRIGATÓRIO para tudo dar certinho.