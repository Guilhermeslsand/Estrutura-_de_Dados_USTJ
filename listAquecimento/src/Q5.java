import java.io.*;
import java.util.Scanner;
public class Q5
{
    public static void main ( String args [] )
    {
        /* cria mecanismo para fazer a leitura dos dados pelo console*/
        Scanner entrada = new Scanner(System.in);
        /* Declare aqui as variáveis necessárias */
        int n1;
        /* Coloque aqui as instruções para leitura dos dados */
        try{
            System.out.print("Entre com 1 valor inteir:\n");
            n1 = entrada.nextInt(); // entrada.nextFloat() para reais
            /* Coloque aqui o código para resolver o problema.
             * Novas variáveis podem ser criadas, se necessário. */
            String respota;
            if (n1%2 == 0){
                respota = "par";
            } else {
                respota = "impar";
            }

            /* Coloque aqui o código para mostrar os resultados */
            String saida = "Resposta:\n";
            saida = saida + respota;
            saida = saida + "\nFim.";
            System.out.print(saida);
        } catch (Exception e) {
            System.out.println("Ocorreu algum erro!");
        }
    }
}