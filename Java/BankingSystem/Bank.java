package com.sakshem;

public class Bank {
    //data members or fields
    private int accountNumber;
    private double balance;
    private String customerName;
    private String email;
    private long phoneNumber;

    //constructor
    public Bank() {
        this(56789, 0.0, "Default name", "default email", 00000000L);
        //System.out.println("empty constructor called!");
    }
    public Bank(int accountNumber, double balance, String customerName, String email, long phoneNumber) {
        //System.out.println("Account constructor with parameters called!");
        this.accountNumber = accountNumber;
        this.balance = balance;
        this.customerName = customerName;
        this.email = email;
        this.phoneNumber = phoneNumber;
        //alternate way of assigning the values to the fields
        /*setAccountNumber(accountNumber);
        setBalance(balance);
        setCustomerName(customerName);
        setEmail(email);
        setPhoneNumber(phoneNumber);*/
    }
    public Bank(String customerName, String email, long phoneNumber) {
        this(99999, 0.0, customerName, email, phoneNumber);
        //called the main parameterized constructor by passing default account number and balance and customerName and others
    }

    //methods or functions
    public int getAccountNumber() {
        return accountNumber;
    }
    public double getBalance() {
        return balance;
    }
    public String getCustomerName() {
        return customerName;
    }
    public String getEmail() {
        return email;
    }
    public long getPhoneNumber() {
        return phoneNumber;
    }
    /*
    * NOTE: this keyword when attached to a variable means we are calling a field of a class and we represent it as this.field (example)
    * but in c++ when we want to use this keyword to call (in a way) the data members of the class we access them as this->field (example)
    * and in Java we use this(parameters) for other different parameters constructor but in c++ we cannot do this.
    * we can assign the default value in the parameters section like this-> Rectangle(int length = 1, int breadth = 1)
    * In this if length or breadth is not passed they will take that as a default value (in this case 1)
    */
    public void setAccountNumber(int accountNumber) { this.accountNumber = accountNumber; }
    public void setBalance(double balance) { this.balance = balance; }
    public void setCustomerName(String customerName) { this.customerName = customerName; }
    public void setEmail(String email) {this.email = email;}
    public void setPhoneNumber(long phoneNumber) { this.phoneNumber = phoneNumber; }
    public void depositFunds(double amountAdded) {
        balance += amountAdded;
        System.out.println("Deposit of " + amountAdded + " successful. Total balance is " + this.balance);
    }
    public void withdrawFunds(double amountTaken) {
        if((balance - amountTaken) >= 0) {
            balance -= amountTaken;
            System.out.println("Withdrawal amount " + amountTaken + " processed. Remaining balance " + this.balance);
        }
        else
            System.out.println("Only " + balance + " available, withdrawal not processed.");
    }
}
