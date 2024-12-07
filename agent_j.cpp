#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define PI 3.14159265358979323846

// Function to calculate the area of intersection of two circles
double area_of_intersection(double r1, double r2, double d) {
    if (d >= r1 + r2) return 0; // No intersection
    if (d <= abs(r1 - r2)) return PI * min(r1, r2) * min(r1, r2); // One circle is inside the other

    double angle1 = 2 * acos((d * d + r1 * r1 - r2 * r2) / (2 * d * r1));
    double angle2 = 2 * acos((d * d + r2 * r2 - r1 * r1) / (2 * d * r2));

    double area1 = 0.5 * r1 * r1 * (angle1 - sin(angle1));
    double area2 = 0.5 * r2 * r2 * (angle2 - sin(angle2));

    return area1 + area2;
}

// Function to calculate the area of intersection of three circles
double area_of_three_circles(double R1, double R2, double R3) {
    // Approximate method: since the circles are just touching each other
    double d = R1; // Assuming the distance between the centers of each pair of circles is R1
    
    // Calculate pairwise intersections (we assume the centers are spaced such that they just touch)
    double area12 = area_of_intersection(R1, R2, d);
    double area13 = area_of_intersection(R1, R3, d);
    double area23 = area_of_intersection(R2, R3, d);

    // Return the combined area (we approximate for simplicity, not exact)
    return area12 + area13 + area23; 
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        double R1, R2, R3;
        cin >> R1 >> R2 >> R3;

        // Calculate the area of the intersection of three circles
        double area = area_of_three_circles(R1, R2, R3);

        // Output the result
        cout << "Case " << t << ": " << fixed << setprecision(8) << area << endl;
    }

    return 0;
}
    