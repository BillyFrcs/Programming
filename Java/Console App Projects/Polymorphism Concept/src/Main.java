public class Main {
    public static void main(String[] args) throws Exception {
        Hewan MyCuteAnimal = new Hewan();
        Hewan MyCuteDog = new Dog();

        final Boolean isRun = true;

        MyCuteAnimal.Run(isRun);
        MyCuteDog.Run(isRun);
    }
}
