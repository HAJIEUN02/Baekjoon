#include <iostream>
#include <ctime>

using namespace std;

void main() {
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
		hour = 0;

	cout << hour << " " << min;
}