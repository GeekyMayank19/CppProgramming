public class Book {
    int price;
    static int cnt;
    public Book(int price){
        this.price = price;
        cnt++;
    }
    public static void main(String[] args) {
        Book s = new Book(122);
        System.out.println(s.price);
    }
}
