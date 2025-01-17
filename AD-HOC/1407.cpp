/*

beecrowd | 1407
Loteria de Fim de Semana
Por Ricardo Anido, UNICAMP  Brazil
Timelimit: 1
Algumas pessoas são contra loterias por motivos morais, alguns governos as proíbem, mas com a criação da internet essa popular forma de aposta, que teve início na China e ajudou a financiar a Grande Muralha, está prosperando.

Mas as chances de se ganhar em uma loteria nacional são pequenas, por conta disso seus colegas de classe decidiram organizar uma loteria particular, cujo sorteio se realiza toda sexta-feira. A loteria é baseada em um estilo popular: um estudante que quer apostar escolhe C números distintos entre 1 e K e paga US$ 1.00 (note que as loterias tradicionais como a US National Lotto usam C=6 e K=49). Na sexta-feira durante o almoço, C números (também de 1 a K) são sorteados. O estudante que acertar a maior quantidade de números sorteados recebe o montante coletado nas apostas. O montante é dividido no caso de empates e acumulado para a próxima semana se ninguém acertar qualquer um dos números sorteados.

Alguns de seus colegas não acreditam nas leis da probabilidade e pediram para você para escrever um programa que determine os números que foram sorteados o menor número de vezes considerando todos os sorteios prévios, para que eles possam apostar nesses números.

Entrada
A entrada contém diversos casos de teste. A primeira linha de um caso de teste contém três inteiros N, C e K que indicam, respectivamente, o número de sorteios que já aconteceram (1 ≤ N ≤ 10000), quantos números compõem uma aposta (1 ≤ C ≤ 10) e o valor máximo que pode ser escolhido numa aposta (C < K ≤ 100). Cada uma das próximas N linhas contém C inteiros distintos Xi indicando os números sorteados em cada concurso prévio (1 ≤ Xi ≤ K, para 1 ≤ i ≤ C). O fim da entrada é indicado por N = C = K = 0.

Saída
Para cada caso de teste, seu programa deve escrever uma linha de saída, contendo o conjunto de números que foram sorteados o menor número de vezes. Este conjunto deve ser impresso como uma lista em ordem crescente. Deixe um espaço em branco entre dois números consecutivos na lista.

Exemplo de Entrada	Exemplo de Saída
5 4 6
6 2 3 4
3 4 6 5
2 3 6 5
4 5 2 6
2 3 6 4
4 3 4
3 2 1
2 1 4
4 3 2
1 4 3
0 0 0

1
1 2 3 4

ACM/ICPC South America Contest 2006.*/