# Automação de Interferômetro com Arduino (TCC)

Sistema de controle para um interferômetro de baixa coerência óptica (Michelson), desenvolvido em C++ para Arduino Nano e com hardware projetado em KiCAD. O sistema controla o movimento (passos) do espelho móvel com precisão, armazena posições na EEPROM e oferece interface por LCD/I2C ou via terminal serial.

Resumo do trabalho:
"DESENVOLVIMENTO DE UM SISTEMA DE CONTROLE DO INTERFERÔMETRO DE BAIXA COERÊNCIA PARA ESTUDOS DE ÍNDICE DE REFRAÇÃO EM MATERIAIS

Trabalho de Conclusão de Curso, apresentado à UEMS. Desenvolveu-se um sistema baseado em Arduino Nano para substituir o controle existente de um interferômetro de Michelson de baixa coerência (luz branca), utilizado para estudos de refração em materiais. O sistema controla o deslocamento do espelho móvel com precisão e permite configuração de parâmetros, armazenamento de posições e futura expansão com sensores/atuadores adicionais."

## Estrutura do repositório

- Hardware (KiCAD):
  - hardware/TCC.kicad_pcb, hardware/TCC.sch e arquivos auxiliares
  - hardware/Gerber/ (produção)
- Firmware (Arduino):
  - TCC8.0/src/main3.cpp — ponto de entrada do firmware
  - TCC8.0/lib — bibliotecas locais (LCD I2C, Soft I2C, Stepper, Interface, Config, etc.)
    - Interface gráfica no LCD: [`UserInterface::mainScreen`](TCC8.0/lib/Interface/Interface.cpp), telas como [`UserInterface::Screen30`](TCC8.0/lib/Interface/Interface.cpp), [`UserInterface::Screen40`](TCC8.0/lib/Interface/Interface.cpp), [`UserInterface::Screen50`](TCC8.0/lib/Interface/Interface.cpp), [`UserInterface::Screen510`](TCC8.0/lib/Interface/Interface.cpp)
    - Interface serial (modo terminal): [`InterfaceSerial::mainScreen`](TCC8.0/lib/InterfaceSerial/InterfaceSerial.cpp), telas 50x/51x/52x
    - Lógica de controle e variáveis globais: [`Data`](TCC8.0/lib/Config/Config.h) e seus getters/setters (ex.: [`Data::getScreenNumber`](TCC8.0/lib/Config/Config.cpp))
    - Driver de motor de passo: [`mStepper`](TCC8.0/lib/mStepper/mStepper.cpp)
    - Leitura de botões/sensores analógicos: [`Analog`](TCC8.0/lib/analogPins/analogPins.cpp), incluindo homing: [`Analog::trailSetup`](TCC8.0/lib/analogPins/analogPins.cpp)
    - Armazenamento em EEPROM (posições): exemplos em [`Select::BttnS312`](TCC8.0/lib/CommandsBttnS/CommandsBttnS.cpp)
- Aplicativos auxiliares de serial:
  - SerialComApp/ (exemplos C++ para comunicação via porta serial)
- Arquivos antigos e referências:
  - legacy/, refs/

## Funcionalidades principais

- Controle de motor de passo 4 fios, com passos por volta configurados (padrão: 64)
- Interface de usuário por LCD (I2C) com menu:
  - Zero Relativo (10x)
  - Ajuste Fino (30x)
  - Ajuste Grosso (40x)
  - Posições Salvas (50x/51x/52x), incluindo Zero Absoluto e posições 1–3
- Modo alternativo por terminal serial (9600 bps), com telas equivalentes (50x–52x)
- Persistência de posições em EEPROM (Zero Abs e posições 1–3)
- Rotina de homing pela leitura analógica (A1) para encontrar início de trilha: [`Analog::trailSetup`](TCC8.0/lib/analogPins/analogPins.cpp)

## Como compilar e gravar

1. Requisitos
   - Arduino Nano (ATmega328P)
   - IDE Arduino (1.8.x ou superior) ou Arduino CLI/PlatformIO
   - Baud rate: 9600 bps (Serial)

2. Passos
   - Abra a pasta TCC8.0 como projeto (o arquivo principal é [TCC8.0/src/main3.cpp](TCC8.0/src/main3.cpp), que define `setup()` e `loop()`).
   - Se usar IDE Arduino, coloque a pasta TCC8.0 como sketch. As bibliotecas usadas estão vendorizadas em TCC8.0/lib (LiquidCrystal_I2C, SoftI2C, etc.).
   - Selecione a placa “Arduino Nano” e a porta correta (ex.: COMx no Windows ou /dev/ttyACMx no Linux).
   - Compile e faça o upload.

Observações:
- A interface (LCD vs. terminal) é selecionada em tempo de execução a partir de [`Data::getSerialCom`](TCC8.0/lib/Config/Config.cpp), configurada em [`setup`](TCC8.0/src/main3.cpp) via `sc.SerialComSetup()` e constantes `SerialComNo`/`SerialComYes`.

## Uso

- Inicialização:
  - O firmware executa o homing com [`Analog::trailSetup`](TCC8.0/lib/analogPins/analogPins.cpp) para levar o espelho à referência da trilha.
  - Em seguida, abre a tela inicial via [`UserInterface::mainScreen`](TCC8.0/lib/Interface/Interface.cpp) ou [`InterfaceSerial::mainScreen`](TCC8.0/lib/InterfaceSerial/InterfaceSerial.cpp), conforme o modo.

- Controles (botões):
  - Códigos definidos em [TCC8.0/src/main3.cpp](TCC8.0/src/main3.cpp): RIGHT=0, UP=1, DOWN=2, LEFT=3, SELECT=4, CANCEL=5.
  - A navegação de telas é baseada em `ScreenNumber` (veja [`Data::getScreenNumber`](TCC8.0/lib/Config/Config.cpp)) e as telas `ScreenXX()` em Interface/InterfaceSerial.

- Salvamento/recuperação de posições:
  - Zero Absoluto é exibido em [`UserInterface::Screen510`](TCC8.0/lib/Interface/Interface.cpp) e equivalentes na interface serial.
  - Posições 1–3 têm telas de visualização e comandos de salvamento, com escrita na EEPROM (ex.: [`Select::BttnS312`](TCC8.0/lib/CommandsBttnS/CommandsBttnS.cpp)).

## Hardware

- Projeto da controladora e integrações no diretório [hardware/](hardware/)
  - Arquivos do KiCAD: TCC.sch, TCC.kicad_pcb, fabricáveis em [hardware/Gerber/](hardware/Gerber/)
- LCD I2C (PCF8574) com biblioteca local [`LiquidCrystal_I2C`](TCC8.0/lib/LiquidCrystal_I2C/LiquidCrystal_I2C.h) e suporte a Soft I2C

## Desenvolvimento

- Organização do código:
  - Lógica/estado: [`Data`](TCC8.0/lib/Config/Config.h, TCC8.0/lib/Config/Config.cpp)
  - UI LCD: [`UserInterface`](TCC8.0/lib/Interface/Interface.h, TCC8.0/lib/Interface/Interface.cpp)
  - UI Serial: [`InterfaceSerial`](TCC8.0/lib/InterfaceSerial/InterfaceSerial.h, TCC8.0/lib/InterfaceSerial/InterfaceSerial.cpp)
  - Controle motor: [`mStepper`](TCC8.0/lib/mStepper/mStepper.h, TCC8.0/lib/mStepper/mStepper.cpp)
  - Botões/sensores: [`Analog`](TCC8.0/lib/analogPins/analogPins.h, TCC8.0/lib/analogPins/analogPins.cpp)

- Parâmetros importantes:
  - Passos por volta: `stepsPerRevolution = 64` em [TCC8.0/lib/Variables/Variables.h](TCC8.0/lib/Variables/Variables.h)
  - Velocidades ajustáveis nas telas de configuração (20x), exibidas por [`UserInterface::Screen210`](TCC8.0/lib/Interface/Interface.cpp) e [`InterfaceSerial::Screen211`](TCC8.0/lib/InterfaceSerial/InterfaceSerial.cpp)
  - Salvamento de posições na EEPROM com endereços calculados em [TCC8.0/lib/Variables/Variables.h](TCC8.0/lib/Variables/Variables.h)

## SerialComApp

Exemplos C++ para comunicação serial com o Arduino estão em [SerialComApp/](SerialComApp/). Úteis para testes de leitura/escrita em Linux/Windows.

## 📄 Licença

MIT

## Contato

Projeto de TCC (Engenharia Física) — automação de interferômetro com Arduino. Para dúvidas técnicas, consulte os arquivos-fonte referenciados acima.

Link para monografia: https://drive.google.com/file/d/1YRrOQsxsX27IK1LEwe4l2IJH7da19-2-/view?usp=drive_link

---
## Apoie

**Feito com ❤️ por Iago Leal** | [☕ Apoie o criador]

Se este projeto ajudou você, considere apoiar:

- Buy Me a Coffee: https://buymeacoffee.com/psiagoleal

<a href="https://buymeacoffee.com/psiagoleal" target="_blank" rel="noopener">
  <img src="https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png" alt="Buy Me A Coffee" height="41" width="174" />
</a>
