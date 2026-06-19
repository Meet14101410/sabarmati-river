public class SabarmatiRiver {
    private final String name = "Sabarmati";
    private final String status = "Perennial/Seasonal depending on dams";

    public void displayStatus() {
        System.out.println("The " + name + " is a vital river for Ahmedabad.");
        System.out.println("Status: " + status);
    }

    public static void main(String[] args) {
        new SabarmatiRiver().displayStatus();
    }
}
