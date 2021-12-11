@FunctionalInterface // Use this only for optional methods
interface Animals {
    public void Eat();
    public int value = 10;
}

@FunctionalInterface
interface Data{
    public int Sum(int x, int y, int z);
}

public class App implements Animals, Data {
    public static void main(String[] args) throws Exception {
       App app = new App();

       app.Eat();

       System.out.println("Value: " + app.value);
       System.out.println("Result Sum: " + app.Sum(5, 2, 6));
    }

    public void Eat() {
        System.out.println("Dog is eating");
    }

    public int Sum(int x, int y, int z)
    {
        return x + y + z;
    }
}
