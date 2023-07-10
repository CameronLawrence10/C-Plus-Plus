//Cameron Lawrence
//CPSC 2021 (M,W 2:30 - 3:20)
//James King, Tenarre Jackson, Steven Caebzas
//This program is written with classes to calculate the total patient/hopsital charges 

#ifndef PATIENT_
#define PATIENT_

//class Patient
    class Patient {
//public class declarations    
    public:
//default construcor       
        Patient() = default;
//constructor       
        Patient(char p, double s, double m):patientType{p}, services{s}, medication{m}{}
        Patient(char p, int d, double r, double s, double m):patientType{p}, days{d}, rate{r}, services{s}, medication{m}{}
//getters        
        char getPatientType();
        int getDays();
        double getRate();
        double getServices();
        double getMedication();
//setters        
        void setPatientType(char p);
        void setDays(int d);
        void setRate(double r);
        void setServices(double s);
        void setMedication(double m);
        double calcTotalCharges();
        
//private class declarations
     private:
//2 bool objects for testing of the validation of input        
        bool validateInput(int input);
        bool validateInput(double input);
        char patientType = {'I'};
        int days = {0};
        double rate = {0.00};
        double services = {0.00};
        double medication = {0.00};

    
};

#endif //PATIENT_