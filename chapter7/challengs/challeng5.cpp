#include <iostream>

using namespace std;

int main() {
  // Khai báo mảng hai chiều
  int weight[3][5];

  // Nhập dữ liệu cho mỗi con khỉ
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      cout << "Nhap luong thuc an cua con khi thu " << i + 1 << " vao ngyay thu " << j + 1 << ": ";
      int input;
      cin >> input;
      while (input < 0) {
        cout << "Luong thuc an khong duoc am. Vui long nhap lai: ";
        cin >> input;
      }
      weight[i][j] = input;
    }
  }

  // Tính toán lượng thức ăn trung bình
  int totalWeight = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      totalWeight += weight[i][j];
    }
  }
  float averageWeight = totalWeight / (3 * 5);

  // Tìm lượng thức ăn ít nhất và nhiều nhất
  int minWeight = weight[0][0];
  int maxWeight = weight[0][0];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      if (weight[i][j] < minWeight) {
        minWeight = weight[i][j];
      }
      if (weight[i][j] > maxWeight) {
        maxWeight = weight[i][j];
      }
    }
  }

  // In báo cáo
  cout << "Luong thuc an cua khi:" << endl;
  cout << "Luong thuc an trung binh mot ngay: " << averageWeight << endl;
  cout << "Luong thuc an it nhat: " << minWeight << endl;
  cout << "Luong thuc an nhieu nhat: " << maxWeight << endl;

  return 0;
}
