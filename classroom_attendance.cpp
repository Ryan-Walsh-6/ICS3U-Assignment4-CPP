// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 11 2020
// this program calculates the attendance the user

#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // this program calculates the attendance the user
    const float PERCENT_ATTENDANCE = 75;
    std::string classes_held_string;
    std::string classes_attended_string;
    double classes_held;
    double classes_attended;
    double attendance;

    // input
    std::cout << "Enter the amount of classes held: ";
    std::cin >> classes_held_string;
    std::cout << "" << std::endl;
    std::cout << "Enter the amount of classes attended: ";
    std::cin >> classes_attended_string;
    std::cout << "" << std::endl;



    // process and output
    try {
        classes_held = std::stoi(classes_held_string);
        classes_attended = std::stoi(classes_attended_string);

        if (classes_attended >= 0 && classes_held > 0) {
            attendance = (classes_attended / classes_held) * 100;

            if (attendance >= PERCENT_ATTENDANCE) {
                std::cout << std::setprecision(2) << std::fixed <<
                "Your attendance for the year was " << attendance << "% so you"
                 " will be allowed to sit in the exam."
                 " Well done!" << std::endl;
            } else {
                std::cout << std::setprecision(2) << std::fixed <<
                "Your attendance for the year was " << attendance << "% so you"
                 " will not be allowed to sit in the exam."
                 " Good luck next time." << std::endl;
           }
        } else {
             std::cout << "Classes Held were less than 1 or classes attended"
                          " was negative. Please try again" << std::endl;
        }
    }catch (std::invalid_argument) {
        std::cout << "Invalid entry. An amount of days was not entered."
              " Please try again";
    }
}
