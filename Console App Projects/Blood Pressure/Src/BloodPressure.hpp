#pragma once

#include <iostream>
#include <string>

struct BP
{
     char name[20], age[3];
     float systolicNum, diastolicNum;
};

void getInfoPatient()
{
     BP patient;

     std::cin.ignore();
     std::cout << "Name patient: ";
     std::cin.getline(patient.name, 20);

     std::cout << "Age patient: ";
     std::cin.getline(patient.age, 3);

     std::cout << "Systolic number: ";
     std::cin >> patient.systolicNum;

     std::cout << "Diastolic number: ";
     std::cin >> patient.diastolicNum;
}

void bloodPressure()
{
     BP category;

     if ((category.BP::systolicNum < 80) || (category.BP::diastolicNum < 60))
     {
          std::cout << "Result blood pressure patient name " << category.name << ", age " << category.age << " is low blood pressure. \n";
     }
     else if ((category.BP::systolicNum <= 120) && (category.BP::diastolicNum <= 80))
     {
          std::cout << "Result blood pressure patient name " << category.name << ", age " << category.age << " is normal. \n";
     }
     else if ((category.BP::systolicNum <= 139) || (category.BP::diastolicNum <= 89))
     {
          std::cout << "Result blood pressure patient name " << category.name << ", age " << category.age << " is prehypertension. \n";
     }
     else if ((category.BP::systolicNum <= 159) || (category.BP::diastolicNum <= 99))
     {
          std::cout << "Result blood pressure patient name " << category.name << ", age " << category.age << " is high blood pressure (prehypertension stage 1). \n";
     }
     else if ((category.BP::systolicNum <= 160) || (category.BP::diastolicNum <= 100))
     {
          std::cout << "Result blood pressure patient name " << category.name << ", age " << category.age << " high blood pressure (prehypertension stage 2). \n";
     }
     else if ((category.BP::systolicNum > 180) || (category.BP::diastolicNum > 110))
     {
          std::cout << "Result blood pressure patient name " << category.name << ", age " << category.age << " is high blood pressure crisis (seek emergency care). \n";
     }
}