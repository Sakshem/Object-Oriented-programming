public class partTimeEmployee extends employee {
    private double dailyWage;

    //1. non-parameterized constructor
    partTimeEmployee () {
        setEmployeeName ("Unknown");
        setEmployeeId (100);
        dailyWage = 1200.20;
    }
    //2. parameterized constructor
    partTimeEmployee (String employeeName, int employeeId, double dailyWage) {
        setEmployeeName (employeeName);
        setEmployeeId (employeeId);
        this.dailyWage = dailyWage;
    }

    //getters or accessors
    public double getDailyWage () { return dailyWage; }

    //setters or mutators
    public void setDailyWage (double dailyWage) {
        this.dailyWage = dailyWage;
    }
}
