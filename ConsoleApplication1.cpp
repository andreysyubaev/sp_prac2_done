//вариант 6
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

//1

//int main() {
//	const int a = 10;
//	int m[a];
//	for (int i = 0; i <= a; ++i) {
//		cout << i;
//	}
//}

//2

//int main() {
//    const int a = 15;
//    const int b = 10;
//    const int c = 5;
//    const int d = 20;
//    int result = 0;
//    int m1[a][b];
//    int m2[c][d];
//
//    for (int i = 0; i < a; ++i) {
//        for (int j = 0; j < b; ++j) {
//            m1[i][j] = i + j;
//            result += m1[i][j];
//        }
//    }
//
//    for (int i = 0; i < c; ++i) {
//        for (int j = 0; j < d; ++j) {
//            m2[i][j] = i + j;
//            result += m2[i][j];
//        }
//    }
//
//    cout << "result: " << result;
//}

//3

//struct Student {
//    std::string name;
//    std::vector<float> grades;
//};
//
//float calculateAverage(const Student& student) {
//    float sum = 0;
//    for (float grade : student.grades) {
//        sum += grade;
//    }
//    return student.grades.empty() ? 0 : sum / student.grades.size();
//}
//
//int main() {
//    Student student;
//    student.name = "Ivan Ivanov";
//
//    // Вводим оценки студента
//    student.grades = { 4.5, 3.7, 5.0, 4.2, 4.0 };
//
//    // Вычисляем и выводим средний балл
//    float avg = calculateAverage(student);
//    std::cout << "Средний балл студента " << student.name << " = " << avg;
//
//    return 0;
//}

//4


class Employee {
private:
    std::string name;
    float salary;

public:
    Employee(const std::string& employeeName, float employeeSalary) {
        name = employeeName;
        salary = employeeSalary;
    }

    void upSalary(float percent) {
        salary += salary * (percent / 100);
    }

    void display() const {
        std::cout << "Name: " << name << ", Salary: $" << salary << std::endl;
    }
};

int main() {
    Employee emp("Tom", 50000);

    emp.display();

    emp.upSalary(10);

    emp.display();

    return 0;
}