import java.io.*;
import java.util.Scanner;
public class Q12
{
    public static void main ( String args [] )
    {
        /* cria mecanismo para fazer a leitura dos dados pelo console*/
        Scanner entrada = new Scanner(System.in);
        /* Declare aqui as variáveis necessárias */
        int n1,n2,tot;
        int [] vetor = new int[10];
        /* Coloque aqui as instruções para leitura dos dados */
        try{
            for (n2=0; n2<10 ; n2++){
                System.out.print("Posicao "+n2+":\n");
                n1 = entrada.nextInt(); // entrada.nextFloat() para reais
                vetor[n2] = n1;
                /* Coloque aqui o código para resolver o problema.
                 * Novas variáveis podem ser criadas, se necessário. */
            }
            /* Coloque aqui o código para mostrar os resultados */
            String saida = "Resposta:\n";
            for(n2=0; n2<10; n2++){
                saida = saida + vetor[9-n2] + " ";
            }
            saida = saida + "\nFim.";
            System.out.print(saida);
        } catch (Exception e) {
            System.out.println("Ocorreu algum erro!");
        }
    }
}