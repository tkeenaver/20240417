public class showpath {
    public static void main(String[] args) {
        String[] arrOfStr = System.getenv("PATH").split(";"); 

        for (String a : arrOfStr) 
            System.out.println(a);
    }
}
