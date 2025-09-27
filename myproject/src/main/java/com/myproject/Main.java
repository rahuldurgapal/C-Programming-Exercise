package com.myproject;

import java.sql.Connection;
import java.sql.DriverManager;

public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello world!");

        Class.forName("com.mysql.cj.jdbc.Driver");

        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/test","root","");
        if(con!=null) {
            System.out.println("Connection successfull");
        } else {
            System.out.println("Connection failed");
        }
    }        

}