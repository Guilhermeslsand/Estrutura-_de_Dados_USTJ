/*
b deve receber a lista dos índices (posições) de a que
contém elementos maiores do que 50.
 */

public class Q20 {
    public static void main ( String args [] ) {
        /* Vetor de "entrada", que já é alocado e inicializado.
        Neste caso, o new é dispensado, pois o compilador já
        deduz o número de posições que devem ser alocadas. */
        int a [] = {32,45,89,66,12,35,10,96,38,15,13,
                11,65,81,35,64,16,89,54,19};

        /* A variável n conterá sempre o tamanho do vetor a.
        Isto irá facilitar novos testes caso queira
        mudar o conteúdo do vetor a */
        int n = a.length;

        /* Declaração e alocação do vetor b, em que será escrita a saída.
        Não sabemos quantos elementos serão necessários, mas sabemos
        que n serão suficientes. O objetivo dos exercícios é mudar o
        conteúdo do vetor b. A variável m declarada a seguir também deve
        ser alterada, indicando quantos elementos de b são realmente
        importantes para a resposta. */
        int b [] = new int [n];
        int m = 0;

        /* A variável a seguir é usada como índice de laços. */
        int i;

        /* Coloque aqui o código necessário para resolver o problema.
        Novas variáveis podem ser criadas, se necessário. No
        final, b e m devem ser modificados.*/
        for (i = 0; i < n ; i++){
            if(a[i] > 50){
                b[m] = a[i];
                m++;
            }
        }

        /* O código abaixo mostra o resultado. Não deve ser alterado */
        String saida = "Resposta:\n";
        for (i = 0; i < m; i++) {
            saida = saida + b[i] + " ";
        }
        saida = saida + "\nFim.";
        System.out.println(saida);
        //System.exit (0);
    }
}
