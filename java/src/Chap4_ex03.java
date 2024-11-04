class Circle {
    int radius;
    Circle()
    {
        radius = 1;
    }
    Circle(int radius)
    {
        this.radius = radius;
    }
    double getArea()
    {
        return 3.14 * radius * radius;
    }
}

public class Chap4_ex03 {

    public static void main(String[] args) 
    {
        Circle c1 = new Circle();
        System.out.printf("원의 넓이 : %.2f\n", c1.getArea());
    

        Circle pizza = new Circle(11);
        Circle donut = new Circle(3);
        System.out.printf("피자의 %d인치, 도넛 %d인치\n", pizza.radius, donut.radius);

        pizza = donut;
        System.out.printf("피자의 %d인치, 도넛 %d인치\n", pizza.radius, donut.radius);
        

        int[] nums = new int[3];
        for(int i = 0; i < nums.length; i++)
        {
            nums[0] = i * 3;
        }

        Circle[] circles = new Circle[3];
        for(int i = 0; i < circles.length; i++)
        {
            circles[i] = new Circle(); //객체형 배열의 각 원소에 대해 객체를 생성해야 한다.
            circles[i].radius = i * 3;
        }


    }
}
