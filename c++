#include <iostream>
#include <string>

struct River {
    std::string name = "Sabarmati";
    std::string region = "Rajasthan and Gujarat";
    double length_km = 371.0;
};

int main() {
    River sabarmati;
    std::cout << "--- River Profile ---\n";
    std::cout << "Name: " << sabarmati.name << "\n";
    std::cout << "Flows through: " << sabarmati.region << "\n";
    std::cout << "Length: " << sabarmati.length_km << " km" << std::endl;
    return 0;
}
