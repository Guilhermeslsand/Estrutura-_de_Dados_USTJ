import java.io.*;
import java.util.Scanner;
public class Q7
{
    public static void main ( String args [] )
    {
        /* cria mecanismo para fazer a leitura dos dados pelo console*/
        Scanner entrada = new Scanner(System.in);
        /* Declare aqui as variáveis necessárias */
        int n1;
        String tot = "";
        /* Coloque aqui as instruções para leitura dos dados */
        try{
            System.out.print("Digite o codigo do produto:\n");
            n1 = entrada.nextInt(); // entrada.nextFloat() para reais
            // entrada.nextLine() para strings
            /* Coloque aqui o código para resolver o problema.
             * Novas variáveis podem ser criadas, se necessário. */
            if(n1 == 1){
                tot = "Parafuso";
            } else if (n1 == 2) {
                tot = "Porca";
            } else if (n1 == 3) {
                tot = "Prego";
            } else {
                tot = "Diversos";
            }
            /* Coloque aqui o código para mostrar os resultados */
            String saida = "Resposta:\n";
            saida = saida + tot;
            saida = saida + "\nFim.";
            System.out.print(saida);
        } catch (Exception e) {
            System.out.println("Ocorreu algum erro!");
        }
    }
}