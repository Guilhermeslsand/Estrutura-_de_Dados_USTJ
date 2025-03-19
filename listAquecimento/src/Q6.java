import java.io.*;
import java.util.Scanner;
public class Q6
{
    public static void main ( String args [] )
    {
        /* cria mecanismo para fazer a leitura dos dados pelo console*/
        Scanner entrada = new Scanner(System.in);
        /* Declare aqui as variáveis necessárias */
        float n1,n2,n3;
        String tot = "";
        /* Coloque aqui as instruções para leitura dos dados */
        try{
            System.out.print("Digites os lados do triangulo:\n");
            n1 = entrada.nextFloat(); // entrada.nextFloat() para reais
            n2 = entrada.nextFloat(); // entrada.nextLine() para strings
            n3 = entrada.nextFloat();
            /* Coloque aqui o código para resolver o problema.
             * Novas variáveis podem ser criadas, se necessário. */
            if(n1 == 0 || n2 == 0 || n3 == 0 || n1 > (n2+n3)
                || n2 > (n1+n3) || n3 > (n1+n2)){
                tot = "Não são lados de um triangulo";
            } else {
                if (n1 == n2 && n1 == n3) {
                    tot = "equilatero";
                } else if ( (n1==n2 && n1!=n3)
                            ||(n1!=n2 && n1==n3)
                            || (n2==n3 && n2!=n1) ){
                    tot = "isosceles";
                } else if (n1!=n2 && n1!=n3) {
                    tot = "escaleno";
                }
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