package com.sakshem;

public class Main {

    public static void main(String[] args) {
	    //a new class bank
        Bank sakshemsAccount = new Bank();
        sakshemsAccount.setAccountNumber(12345);
        sakshemsAccount.setBalance(0.00);
        sakshemsAccount.setCustomerName("Sakshem Jain");
        sakshemsAccount.setEmail("sakshemjain@gmail.com");
        sakshemsAccount.setPhoneNumber(9770615329L);

        //withdrawing and depositing funds
        sakshemsAccount.withdrawFunds(100.0);

        sakshemsAccount.depositFunds(50.0);
        sakshemsAccount.withdrawFunds(100.0);

        sakshemsAccount.depositFunds(51.0);
        sakshemsAccount.withdrawFunds(100.0);
        System.out.println();
        //creating a new account (or object of class Bank with calling the constructor and initializing the value there itself)
        Bank bobsAccount = new Bank(2030, 0.00, "Bob Brown", "myemail@bob.com", 9826239915L);
        System.out.println("Account number: " + bobsAccount.getAccountNumber());
        System.out.println("Current Balance: " + bobsAccount.getBalance());
        System.out.println("Customer Name: " + bobsAccount.getCustomerName());
        System.out.println("Customer's Email address: " + bobsAccount.getEmail());
        System.out.println("Customer Phone Number: " + bobsAccount.getPhoneNumber());

        //creating a new account in the bank for Tim
        System.out.println();
        Bank timsAccount = new Bank("Tim", "tim232@gmail.com", 324038332423L);
        System.out.println(timsAccount.getAccountNumber() + " " + timsAccount.getCustomerName() + " " + timsAccount.getEmail() + " " + timsAccount.getPhoneNumber());
    }
}
