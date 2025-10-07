# movimentacao-xadrez
Exercicio sobre movimentação de peças de xadrez

# Desafio de Programação: Movimentos Complexos de Xadrez

## Descrição do Projeto

O objetivo é simular os movimentos de diferentes peças de xadrez (Torre, Bispo, Rainha e Cavalo) utilizando a linguagem C.

## Funcionalidades Implementadas

O programa simula e imprime no console a trajetória dos seguintes movimentos:

* **Torre:** Movimento em linha reta (direita) implementado com uma **função recursiva**.
* **Rainha:** Movimento em linha reta (esquerda) implementado com uma **função recursiva**.
* **Bispo:**
    * Movimento diagonal implementado com uma **função recursiva**.
    * Movimento diagonal também implementado com **loops aninhados**, conforme solicitado no desafio.
* **Cavalo:** Movimento em "L" (duas casas para cima e uma para a direita) implementado com um **loop complexo**, utilizando as instruções `continue` e `break` para controle de fluxo.

## Tecnologias Utilizadas

* **Linguagem:** C
* **Compilador:** GCC (MinGW-w64)

## Como Compilar e Executar

Para compilar e executar o projeto, siga os passos abaixo. É necessário ter o compilador GCC instalado e configurado no PATH do sistema.

1.  **Navegue até a pasta do projeto**
    Abra um terminal e use o comando `cd` para navegar até o diretório onde o arquivo `chess.c` está localizado.

2.  **Compile o código-fonte**
    Execute o seguinte comando para compilar o programa:
    ```bash
    gcc chess.c -o chess.exe
    ```

3.  **Execute o programa**
    Após a compilação, execute o arquivo gerado com o comando:
    ```bash
    .\chess.exe
    ```

## Autor

* **Nome:** Eduardo Costa
