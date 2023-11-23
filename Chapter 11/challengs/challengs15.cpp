#include <iostream>
#include <iomanip>

using namespace std;

// Cấu trúc cho người lao động được trả lương theo giờ
struct HourlyEmployee {
    double hoursWorked;
    double hourlyRate;
};

// Cấu trúc cho người lao động làm công ăn lương
struct SalariedEmployee {
    double salary;
    double bonus;
};

// Liên minh của cả hai cấu trúc
union EmployeeUnion {
    HourlyEmployee hourlyEmployee;
    SalariedEmployee salariedEmployee;
};

// Hàm để tính lương cho người lao động được trả lương theo giờ
double calculateHourlySalary(const HourlyEmployee& employee) {
    return employee.hoursWorked * employee.hourlyRate;
}

// Hàm để tính lương cho người lao động làm công ăn lương
double calculateSalariedSalary(const SalariedEmployee& employee) {
    return employee.salary + employee.bonus;
}

int main() {
    // Liên minh để lưu trữ dữ liệu của người lao động
    EmployeeUnion employeeData;

    // Hỏi người dùng xem họ đang tính lương theo giờ hay công ăn lương
    char choice;
    cout << "Ban dang tinh luong theo gio (h) hay lam cong an luong (s)? ";
    cin >> choice;

    if (choice == 'h' || choice == 'H') {
        // Nhập dữ liệu cho người lao động được trả lương theo giờ
        cout << "Nhap so gio lam viec: ";
        cin >> employeeData.hourlyEmployee.hoursWorked;

        // Xác thực đầu vào: Không chấp nhận số giờ âm hoặc lớn hơn 80
        while (employeeData.hourlyEmployee.hoursWorked < 0 || employeeData.hourlyEmployee.hoursWorked > 80) {
            cout << "So gio lam viec khong hop le. Nhap lai: ";
            cin >> employeeData.hourlyEmployee.hoursWorked;
        }

        cout << "Nhap ty le hang gio: ";
        cin >> employeeData.hourlyEmployee.hourlyRate;

        // Xác thực đầu vào: Không chấp nhận tỷ lệ hàng giờ âm
        while (employeeData.hourlyEmployee.hourlyRate < 0) {
            cout << "Ty le hang gio khong hop le. Nhap lai: ";
            cin >> employeeData.hourlyEmployee.hourlyRate;
        }

        // Tính toán và hiển thị lương
        double hourlySalary = calculateHourlySalary(employeeData.hourlyEmployee);
        cout << "Luong: $" << fixed << setprecision(2) << hourlySalary << endl;
    } else if (choice == 's' || choice == 'S') {
        // Nhập dữ liệu cho người lao động làm công ăn lương
        cout << "Nhap luong co ban: ";
        cin >> employeeData.salariedEmployee.salary;

        // Xác thực đầu vào: Không chấp nhận lương cơ bản âm
        while (employeeData.salariedEmployee.salary < 0) {
            cout << "Luong co ban khong hop le. Vui long nhap lai: ";
            cin >> employeeData.salariedEmployee.salary;
        }

        cout << "Nhap tien thuong: ";
        cin >> employeeData.salariedEmployee.bonus;

        // Xác thực đầu vào: Không chấp nhận tiền thưởng âm
        while (employeeData.salariedEmployee.bonus < 0) {
            cout << "Tien thuong khong hop le. Vui long nhap lai: ";
            cin >> employeeData.salariedEmployee.bonus;
        }

        // Tính toán và hiển thị lương
        double salariedSalary = calculateSalariedSalary(employeeData.salariedEmployee);
        cout << "Luong: $" << fixed << setprecision(2) << salariedSalary << endl;
    } else {
        cout << "Lua chon khong hop le.\n";
    }

    return 0;
}
