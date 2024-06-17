// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    int totalCredits = 0;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    //using a ref (Grade&) instead of Grade because objects store a lot of memory 
    for(Grade& grade:grades){
        if(grade.get_student_id() == id){
            int courseId = grade.get_course_id();
            auto gradeChar = grade.get_grade();
            int gradeNum;
            switch (gradeChar)
            {
            case 'A':
                gradeNum = 4;
                break;
            case 'B':
                gradeNum = 3;
                break;
            case 'C':
                gradeNum = 2;
                break;
            
            default:
                break;
            }

        switch (courseId)
        {
        case 1:
            GPA += gradeNum*5;
            totalCredits += 5;
            break;
        case 2:
            GPA += gradeNum*4;
            totalCredits += 4;
            break;
        case 3:
            GPA += gradeNum*3;
            totalCredits += 3;
            break;
        case 4:
            GPA += gradeNum*4;
            totalCredits += 4;
            break;
        default:
            break;
        }

        }
        
    }
    std::cout << "GPA debug: " << GPA << std::endl;
    GPA /= totalCredits;


    std::string student_str;
    student_str = students[id-1] .get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
