public class fullTimeEmployee extends employee {
    private double salary;

    //constructors
    //1. non-parameterized constructor
    fullTimeEmployee () {
        setEmployeeName ("unknown");
        setEmployeeId (100);
        salary = 40000.00;
        System.out.println("Empty constructor called!");
    }
    //2. parameterized constructor
    fullTimeEmployee (String employeeName, int employeeId, double salary) {
        setEmployeeName (employeeName);
        setEmployeeId (employeeId);
        this.salary = salary;
        System.out.println("parameterized constructor called!");
    }

    //getters or accessors
    double getSalary () { return salary; }

    //setters or mutators
    void setSalary (double salary) { this.salary = salary; }
}