package com.sakshem;

public class Main {

    public static void main(String[] args) {
        Car porsche = new Car();
        Car holden = new Car();
        //porsche.model = "Carrera"; //inefficient (if we made it public)
        porsche.setModel("Carrera");
        System.out.println("Model is: " + porsche.getModel());
        holden.setModel("Volkswagen Jetta");
        System.out.println("Model for Holden is: " + holden.getModel());
        //this holden.setModel("Volkswagen Jetta"); will give unknown as model
        //as we have set validModel as two types it could be either carrera or commodore
    }
}
