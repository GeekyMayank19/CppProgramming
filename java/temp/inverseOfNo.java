package temp;
public class inverseOfNo {
    public static void main(String[] args) {
        // write your code here 
        Scanner scn = new Scanner(System.in);
        int n= scn.nextInt();
        int num = n;
        int cnt = 0;
        while(num!=0){
            num=num/10;
            cnt++;
        }
       
        int newnum=0;
        int div = (int)Math.pow(10,cnt-1);
      //   System.out.print(div);
        while(cnt!=0){
            int q =n/div;
            int a = (int)Math.pow(10,q-1);
            int b = cnt*a;
            int r =n%div;
            n=r;
            div=div/10;
            newnum=newnum+b;
            cnt--;
          //   System.out.println(q);
          //   System.out.println(a);
          //   System.out.println(b);
          //   System.out.println(n);
          //   System.out.println(div);
          //   System.out.println(cnt);
        }
       System.out.println(newnum);
       }
}
