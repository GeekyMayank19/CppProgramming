public class DigitOfnum {
     public static void main(String[] args) {
         // write your code here
    int n=65784383;
     int num=n;
     int cnt=0;
     while(num!=0){
         num=num/10;
         cnt++;
     }
    int div = (int)Math.pow(10,cnt-1);
    while(div!=0){
        int q= n/div;
        int r= n%div;
        System.out.println(q);
        n=r;
        
        div /=10;
    }
    }
}
