#include <iostream>
#include <cctype>
#include <cmath>

double gwaComputations (double totalGrades, double totalUnits);
void gradeRemarks (double gwaResult);
void latinRemarks (double gwaResult); 

int main () {
    double subjects, grades, units;
    [[maybe_unused]] double totalGrades {0}, totalUnits {0};
    char choice, decision;
        do {
          std::cout << "\n========== WMSU GWA Calculator ==========\n" ;
            std::cout << "==== Grade in 100%  WMSU   Adjusted  ====\n"   ;
            std::cout << "====   99-100        1.00    96-100  ====\n"   ;
            std::cout << "====   95-98         1.25    91-95   ====\n"   ;
            std::cout << "====   90-94         1.50    86-90   ====\n"   ;
            std::cout << "====   85-89         1.75    81-85   ====\n"   ;
            std::cout << "====   80-84         2.00    76-80   ====\n"   ;
            std::cout << "====   75-79         2.25    71-75   ====\n"   ;
            std::cout << "====   70-74         2.50    66-70   ====\n"   ;
            std::cout << "====   65-69         2.75    61-65   ====\n"   ;
            std::cout << "====   60-64         3.00    60-61   ====\n"   ;
            std::cout << "====  Below 60       5.00   Below 60 ====\n"   ;
            std::cout << "=========================================\n"   ;

            std::cout << "\nEnter number of subjects: ";
            std::cin >> subjects;
            std::cout << "\n";

            for (int i = 1; i <= subjects; i++){
                
                std::cout << "Enter grade for subject " << i << ": ";
                std::cin >> grades;

                std::cout << "Enter number of units: ";
                std::cin >> units;

               totalGrades += grades * units;
               totalUnits += units; 
            }

            double gwaResult = gwaComputations (totalGrades, totalUnits);

            std::cout << "\nGWA: " << gwaResult;
            std::cout << "\nGrade remarks: ";
                gradeRemarks (gwaResult);

            std::cout << "Do you want to see if you are elligible for Latin honors(y/n)? ";
            std::cin >> decision;
            std::cout << "\n!!! Proceed with caution !!!"
            "\nBe sure to enter all required subjects, grades and units to achieve desired results!\n";
                if (toupper(decision) == 'Y'){
                     std::cout << "\nElligibility remarks: ";
                        latinRemarks (gwaResult);
                }

            std::cout << "\nDo you want to repeat process(y/n)? ";
            std::cin >> choice;

        } while (toupper(choice) == 'Y');
    
    return 0;
}

double gwaComputations (double totalGrades, double totalUnits) {
    return totalGrades / totalUnits;
}

void gradeRemarks (double gwaResult) {
    double step = 0.25;
    double rounded = round(gwaResult/step) * step;
        if (rounded > 5.00) {
            std::cout << "Error computation. Please try again.";
        exit(0);
        }
        else if (rounded == 1.00) {
            std::cout << "An equivalent grade of A+ or 99-100. \nRemark: Excellent.\n";
        }
        else if (rounded == 1.25 ) {
            std::cout << "An equivalent grade of A or 95-98. \nRemark: Excellent.\n";
        }
        else if (rounded == 1.50) {
            std::cout << "An equivalent grade of B+ or 90-94. \nRemark: Very Satisfactory\n";
        }
        else if (rounded == 1.75) {
            std::cout << "An equivalent grade of B or 85-89. \nRemark: Very Satisfactory.\n";
        }
        else if (rounded == 2.0) {
            std::cout << "An equivalent grade of B- or 80-84. \nRemark: Satisfactory.\n";
        }
        else if (rounded == 2.25) {
            std::cout << "An equivalent grade of C+ or 75-79. \nRemark: Satisfactory.\n";
        }
        else if (rounded == 2.50) {
            std::cout << "An equivalent grade of C or 70-74. \nRemark: Fair.\n"; 
        }
        else if (rounded == 2.75) {
            std::cout << "An equivalent grade of D or 65-69. \nRemark: Passing.\n";
        }
        else if (rounded == 3.0) {
            std::cout << "An equivalent grade of E or 60-64. \nRemark: Conditional/Barely Passed.\n";
        }
        else {
            std::cout << "An equivalent grade of F or below 60. \nRemark: Failed.\n";
        }

}

void latinRemarks (double gwaResult) {
    double evaluation = gwaResult;
        if (evaluation >= 1.00 && evaluation <= 1.20 ) {
            std::cout << "\nYour GWA is elligible for Summa Cum Laude.\n";
        }
        else if (evaluation >= 1.21 && evaluation <= 1.40) {
            std::cout << "\nYour GWA is elligible for Magna Cum Laude.\n";
        }
        else if (evaluation >= 1.41 && evaluation <= 1.60) {
            std::cout << "\nYour GWA is elligible for Cum Laude.\n";
        }
        else {
            std::cout << "\nSorry! You are no longer elligible for any Latin honors. \nMaybe try again in another life?\n";
        }
}
