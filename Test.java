class Coordinate {
    int x, y;

    public Coordinate(int x, int y) {
        this.x = x;
        this.y = y;
    }
}
public class Main {
    public static void main(String args[]) {
        Coordinate p = new Coordinate();
        System.out.println("x = " + p.x + ", y = " + p.y);
    }
}
