/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Vincent
 */
import java.math.BigInteger;
import java.util.Scanner;
public class a021 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        String a,b;
        String symbol;
        
        while(cin.hasNext()){
            a = cin.next();
            symbol = cin.next();
            b = cin.next();
            
            BigInteger Ba = new BigInteger(a);
            BigInteger Bb = new BigInteger(b);
            
            if (symbol.equals("+"))
                Ba = Ba.add(Bb);
            else if (symbol.equals("-"))
                Ba = Ba.subtract(Bb);
            else if (symbol.equals("*"))
                Ba = Ba.multiply(Bb);
            else if (symbol.equals("/"))
                Ba = Ba.divide(Bb);
            System.out.println(Ba);
        }
        
    }
    
}
