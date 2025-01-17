/*

beecrowd | 1404
MegaDamas
Por Ricardo Anido  Brazil
Timelimit: 1
MegaDamas é um jogo de tabuleiro para dois jogadores, muito similar ao conhecido jogo de Damas. O tabuleiro é retangular, com N linhas e M colunas de pequenos quadrados arranjados em uma grade N x M. Os pequenos quadrados são alternadamente coloridos com uma cor clara e uma cor escura, no padrão usual de um tabuleiro de damas. Os quadrados de cor escura são denominados “casas” (note no entanto que, por razões de visualização, os diagramas abaixo mostram casas como quadrados brancos).

No início do jogo, cada jogador tem um certo número de peças, posicionadas nas casas mais próximas da borda do tabuleiro que o jogador escolher (os jogadores escolhem bordas opostas). Durante o jogo, as peças só podem ocupar as casas do tabuleiro.

Um dos movimentos do jogo é “capturar” uma peça do oponente, saltando sobre ela, diagonalmente, para a casa adjacente além da peça, casa esta que deve estar vazia. A peça do oponente é então removida do tabuleiro. As três casas envolvidas na captura (a casa inicial de sua peça, a casa que contém a peça do oponente e a casa vazia, onde sua peça estará após a jogada) devem estar diagonalmente alinhadas e devem ser diagonalmente adjacentes, como no diagrama abaixo.



Em MegaDamas uma peça pode capturar peças do oponente saltando diagonalmente para frente ou para trás (note que, na maioria das variações existentes do jogos de Damas, uma peça só pode capturar peças do oponente saltando para frente). Você pode também efetuar uma captura múltipla, com uma peça apenas, saltando seguidamente para casas vazias sobre peças oponentes. Em uma captura múltipla, a sua peça pode mudar de direção, saltando primeiro em uma direção e depois em outra. Você pode capturar apenas uma peça a cada salto, mas pode capturar várias peças com saltos seguidos. Você não pode saltar sobre uma peça sua, e não pode saltar a mesma peça oponente mais de uma vez.

São dadas as dimensões do tabuleiro e uma descrição do estado corrente de um jogo. É a sua vez de jogar e você deve determinar o número máximo de peças do seu oponente que podem ser capturadas em um movimento de captura.

Entrada
A entrada contém vários casos de teste. A primeira linha de um caso de teste contém dois inteiros N e M indicando respectivamente o número de linhas e o número de colunas do tabuleiro (3 ≤ N ≤ 20, 3 ≤ M ≤ 20 e N x M ≤ 200). O quadrado mais à esquerda do tabuleiro na borda mais próxima ao jogador é uma casa. A segunda linha contém a descrição do estado do jogo. Cada descrição consiste de [(N x M)/2] inteiros, separados por um espaço, correspondendo às casas do tabuleiro, que são numeradas de 1 a [(N x M)/2], da esquerda para a direita, da borda mais próxima ao jogador à borda mais próxima ao seu oponente. Na descrição do estado do jogo, ‘0’ representa uma casa vazia, ‘1’ representa uma casa com uma de suas peças, e ‘2’ representa uma casa com uma peça de seu oponente. Há no máximo [(N x M)/4] peças de cada jogador no tabuleiro. O final da entrada é indicado por N = M = 0.



Figura 1: Numeração das casas em (a) tabuleiro de dimensões 8 x 8 e em (b) tabuleiro de dimensões 5 x 3.

Saída
Para cada caso de teste da entrada, seu programa deve produzir uma única linha na saída, contendo um inteiro indicando o maior número de peças do seu oponente que podem ser capturadas em uma jogada.

Exemplo de Entrada	Exemplo de Saída
3 3
2 1 2 0 1
5 3
1 0 2 1 0 2 0 0
8 8
2 2 2 2 0 0 0 0 2 2 2 2 0 0 0 0 2 2 2 2 0 0 0 0 2 2 2 2 0 1 0 0
0 0

1
2
7

Maratona de Programacao da SBC 2006.*/