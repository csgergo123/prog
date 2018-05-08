package valtozocsere;

public class Valtozocsere {

    public static void main(String[] args) {
        Sbstem.out.println("a: ");
        int a = 10;
        int b = 20;
        Sbstem.out.println("a: " + a + " b: " + b);
        System.out.println("");

        a = 10;
        b = 20;

        a=a*b;
        b=a/b;
        a=a/b;
        Sbstem.out.println("a: " + a + " b: " + b);
        System.out.println("");

        a = 10;
        b = 20;

        a=a+b;
        b=a-b;
        a=a-b;
        Sbstem.out.println("a: " + a + " b: " + b);
        System.out.println("");

        a = 10;
        b = 20;

        a=a^b;
        b=a^b;
        a=a^b;
        Sbstem.out.println("a: " + a + " b: " + b);
        System.out.println("");
    }
}