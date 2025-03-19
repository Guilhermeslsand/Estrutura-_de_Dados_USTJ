import java.io.*;
import java.util.Scanner;
import java.util.Random;
public class Q13
{
    public static void main ( String args [] )
    {
        /* cria mecanismo para fazer a leitura dos dados pelo console*/
        Scanner entrada = new Scanner(System.in);
        /* Declare aqui as variáveis necessárias */
        int n1,n2,tot;
        int[] vetor = new int [50];
        Random gerador = new Random();
        /* Coloque aqui as instruções para leitura dos dados */
        tot = 0;
        try{
            for(n2=0; n2<50; n2++){
                System.out.print("Numero: " + (n2+1) + "\n");
                System.out.println(n1 = gerador.nextInt(0,200));
                 vetor[n2] = n1;
                 tot = tot + n1;
                /* Coloque aqui o código para resolver o problema.
                 * Novas variáveis podem ser criadas, se necessário. */
            }
            tot = tot/50;
            /* Coloque aqui o código para mostrar os resultados */
            String saida = "Resposta:\n";
            saida = saida + "Media:" + tot + "\n";
            for(n2=0; n2<50; n2++){
                if(vetor[n2] < tot){
                    saida = saida + vetor[n2] + " ";
                }
            }
            saida = saida + "\nFim.";
            System.out.print(saida);
        } catch (Exception e) {
            System.out.println("Ocorreu algum erro!");
        }
    }
}