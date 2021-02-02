public class employee {
    private String employeeName;
    private int employeeId;

    //constructor
    employee () {
        this ("unknown", 100);
        //System.out.println("Empty constructor called!");
    }
    employee (String employeeName, int employeeId) {
        this.employeeName = employeeName;
        this.employeeId = employeeId;
    }
    //accessors or getters
    public String getEmployeeName () { return employeeName; }
    public int getEmployeeId () { return employeeId; }

    // mutators or setters
    public void setEmployeeName (String name) { employeeName = name; }
    public void setEmployeeId (int id) { employeeId = id; }
}
