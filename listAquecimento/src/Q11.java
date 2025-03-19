import java.io.*;
import java.util.Scanner;

import java.util.Random;

public class Q11
{
    public static void main ( String args [] )
    {
        /* cria mecanismo para fazer a leitura dos dados pelo console*/
        Scanner entrada = new Scanner(System.in);
        /* Declare aqui as variáveis necessárias */
        int n1,n2,tot;
        Random gerador = new Random();
        /* Coloque aqui as instruções para leitura dos dados */
        try{
            tot = 0;
            // entrada.nextLine() para strings
            /* Coloque aqui o código para resolver o problema.
             * Novas variáveis podem ser criadas, se necessário. */
            for (n2=0; n2<50; n2++){
                System.out.print("Numero "+(n2+1)+":\n");
                //n1 = entrada.nextInt();
                n1 = gerador.nextInt(0,100);
                System.out.print(n1+"\n");
                tot = tot + n1;
            }
            /* Coloque aqui o código para mostrar os resultados */
            tot = tot/50;
            String saida = "Resposta:\n";
            saida = saida + tot;
            saida = saida + "\nFim.";
            System.out.print(saida);
        } catch (Exception e) {
            System.out.println("Ocorreu algum erro!");
        }
    }
}