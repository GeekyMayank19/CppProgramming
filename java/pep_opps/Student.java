public class Student {
    
    private int roll_number;
    private String name;
    static int NoOfStd = 0;
    public Student(int roll_number, String name){
        this.roll_number = roll_number;
        this.name = name;
    }
    public  int getroll(){
        return this.roll_number;
    }
    public String getName(){
        return this.name;
    }
    public static void main(String[] args) {
        Student s1 = new Student(1,"mayank");
        System.out.println(s1.getroll());
        // System.out.println()
    }

}
