package temp;
/**
 * RotateANumQTime
 */
public class RotateANumQTime {

    public static void main(String[] args) {
        // write your code here  
        Scanner scn = new Scanner(System.in);
        int n= scn.nextInt();
        int k = scn.nextInt();
       //find no of digit 
        int num=n;
        int cnt=0;
        while(num!=0){
            num=num/10;
            cnt++;
        }
       
       //bring range of k
       k=k%cnt;
       if(k<0){
           k=cnt+k;
       }   
        // divisor and multiple
        int div = (int)Math.pow(10,k);
        int div1 = (int)Math.pow(10,cnt-k);
        int q= n/div;
        int r= n%div;
        //make answer
        r=r*div1+q;
        
        System.out.println(r);
        
       }
}