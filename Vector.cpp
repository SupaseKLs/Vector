#include <iostream>

using namespace std;

int main() {

	// ประกาศตัวแปรสำหรับพิกัดจุด
	int ax, ay, bx, by;

	// รับค่าพิกัดจุด A
	cout << "ป้อนพิกัด x ของจุด A: ";
	cin >> ax;
	cout << "ป้อนพิกัด y ของจุด A: ";
	cin >> ay;

	// รับค่าพิกัดจุด B
	cout << "ป้อนพิกัด x ของจุด B: ";
	cin >> bx;
	cout << "ป้อนพิกัด y ของจุด B: ";
	cin >> by;

	// หาเวกเตอร์ AB
	int abx = bx - ax;
	int aby = by - ay;

	// หาเวกเตอร์ BA
	int bax = ax - bx;
	int bay = ay - by;

	// แสดงผลลัพธ์
	cout << "เวกเตอร์ AB = (" << abx << ", " << aby << ")" << endl;
	cout << "เวกเตอร์ BA = (" << bax << ", " << bay << ")" << endl;

	return 0;
}
