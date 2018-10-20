import java.nio.file.*;
import java.util.*;
import java.io.*;
import java.math.*;



class Euler13{

    public static void main(String[]  args){

        Path fileLoc = Paths.get("input.txt");
                

        List<String> list = null;
        try{
            list = Files.readAllLines(fileLoc);
        }
        catch(IOException ioe){
            System.out.println("Failed");
        }
        
        BigInteger bigSum = new BigInteger("0");
        for(String item : list){

            BigInteger bigNum = new BigInteger(item);
            bigSum = bigSum.add(bigNum);
        }       
        //System.out.println(bigSum.toString());
        
        char[] charsn = bigSum.toString().toCharArray();
        for(int i = 0; i <= 9; i++){
            System.out.print(charsn[i] + " ");    
        }
        System.out.print("\n");

    }




} // end of class