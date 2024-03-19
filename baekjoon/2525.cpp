#include <iostream>

using namespace std;

int main() {
	int hour, min;
	int oven_timer;

	cin >> hour >> min;
	cin >> oven_timer;

	hour += oven_timer / 60;
	min += oven_timer % 60;

	if (min >= 60) {
		hour++;
		min -= 60;
	}
	if (hour >= 24)
		hour -= 24;

	cout << hour << " " << min;

	return 0;
}