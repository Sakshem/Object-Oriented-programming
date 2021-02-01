package com.sakshem;

public class Car {
    //fields means variables
    private int doors;
    private int wheels;
    private String model;
    private String engine;
    private String colour;

    public void setModel(String model)
    {
        //since the model parameter has the same name as the private data member to tell
        //the IDE which model data we want to update we need to use "this" keyword
        String validModel = model.toLowerCase();
        if(validModel.equals("carrera") || validModel.equals("commodore"))
            this.model = model;
        else
            this.model = "Unknown";
    }
    public String getModel()
    {
        return model;
        //return this.model;
    }
}
