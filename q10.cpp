#include<iostream>
public class PatientMonitor {

    // Private fields – protected from direct access
    private int heartRate;
    private int oxygenLevel;

    // Setter for heart rate with validation
    public void setHeartRate(int heartRate) {
        if (heartRate >= 30 && heartRate <= 180) {
            this.heartRate = heartRate;
        } else {
            System.out.println("Invalid heart rate! Must be between 30 and 180.");
        }
    }

    // Setter for oxygen level with validation
    public void setOxygenLevel(int oxygenLevel) {
        if (oxygenLevel >= 50 && oxygenLevel <= 100) {
            this.oxygenLevel = oxygenLevel;
        } else {
            System.out.println("Invalid oxygen level! Must be between 50 and 100.");
        }
    }

    // Method to display patient status
    public void showStatus() {
        if (oxygenLevel < 80) {
            System.out.println("Critical Alert");
        } 
        else if (heartRate < 40 || heartRate > 150) {
            System.out.println("Abnormal Heart Rate");
        } 
        else {
            System.out.println("Stable");
        }
    }
}
public class Main {
    public static void main(String[] args) {
        PatientMonitor p = new PatientMonitor();

        p.setHeartRate(160);
        p.setOxygenLevel(75);

        p.showStatus();  // ? Critical Alert
    }
}

