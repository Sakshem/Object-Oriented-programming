public class Main {

    public static void main(String[] args) {
        //inheritance project
        fullTimeEmployee p1 = new fullTimeEmployee ("John", 2102, 50000);
        partTimeEmployee p2 = new partTimeEmployee ("Mark", 3214, 1200.20);
        System.out.println("Salary of " + p1.getEmployeeName () + " is: " + p1.getSalary ());
        System.out.println("Salary of " + p2.getEmployeeName () + " is: " + p2.getDailyWage ());

        fullTimeEmployee p3 = new fullTimeEmployee ();
        System.out.println("Salary of " + p3.getEmployeeName () + " is: " + p3.getSalary ());
    }
}
