class Car {

    String model;
    int year;

    Car() {
        model = "미정";
        year = 2023;
    }

    Car(String model, int year) {
        this.model = model;
        this.year = year;
    }

    Car(String model) {
        this.model = model;
        year = 2023;
    }
    
    double calculatePrice() {
        double price = 1000;
        while(year < 2023) {
            price -= 100;
            year++;
        }
        return price;
    }
    void  displayInfo() {
        System.out.println("모델명: " + model + ", 연식: " + year);
    }

    void displayInfo(boolean showPrice) {
        System.out.printf("모델명: %s, 연식: %d", model, year);
        if(showPrice) {
            System.out.println(", 가격: " + calculatePrice());
        }
    }
}


public class Chap4_q1 {
    public static void main(String[] args) {
        Car Sonata = new Car("Sonata", 2020);
        Car Avante = new Car("Avante");
        Car c = new Car();

        Sonata.displayInfo();
        Avante.displayInfo();
        c.displayInfo();
        Sonata.displayInfo(true);
        Avante.displayInfo(true);
        c.displayInfo(true);

    }
}
