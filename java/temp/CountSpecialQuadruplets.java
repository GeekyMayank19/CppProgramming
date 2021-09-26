package temp;
import java.io.*;
import java.util.Scanner;

public class CountSpecialQuadruplets {
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        if (System.getProperty("ONLINE_JUDGE") == null) {
       
            try {
             
                System.setOut(new PrintStream(
                new FileOutputStream("output.txt")));
                scn = new Scanner(new File("input.txt"));
            }
            catch (Exception e) {
            }
        }
    ////////////////
        int n = scn.nextInt();
        int []arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = scn.nextInt();
            // System.out.println(arr[i]);
        }
        int c =0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k = j+1;k<n;k++){
                    for(int l = k+1;l<n;l++){
                        if(arr[i]+arr[j]+arr[k]==arr[l]){
                            c++;
                        }
                    }
                    
                }
            }
        }
        System.out.print(c);
    }
}
