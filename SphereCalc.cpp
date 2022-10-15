#include <iostream>

struct vec3
{
    double x, y, z;
};

int main()
{
    vec3 pointA, pointB, vecAB;
    double rA, rB, rSum, mag;

    std::cout << "Sphere A, X coordinate: ";
    std::cin >> pointA.x;
    std::cout << "Sphere A, Y coordinate: ";
    std::cin >> pointA.y;
    std::cout << "Sphere A, Z coordinate: ";
    std::cin >> pointA.z;
    std::cout << "Sphere A radius: ";
    std::cin >> rA;

    std::cout << "Sphere B, X coordinate: ";
    std::cin >> pointB.x;
    std::cout << "Sphere B, Y coordinate: ";
    std::cin >> pointB.y;
    std::cout << "Sphere B, Z coordinate: ";
    std::cin >> pointB.z;
    std::cout << "Sphere B radius: ";
    std::cin >> rB;

    vecAB.x = pointB.x - pointA.x;
    vecAB.y = pointB.y - pointA.y;
    vecAB.z = pointB.z - pointA.z;

    mag = sqrt((vecAB.x * vecAB.x) + (vecAB.y * vecAB.y) + (vecAB.z * vecAB.z));
    rSum = rA + rB;

    std::cout << "\nThe vector A->B is: (" << vecAB.x << ", " << vecAB.y << ", " << vecAB.z << ")\n";
    std::cout << "The distance between the sphere cooridinates is: " << mag << std::endl;
    std::cout << "The sum of the sphere's radiuses is: " << rSum << std::endl;

    if (rSum < mag)
    {
        std::cout << "The spheres are not in contact with each other. They are seperated by a distance of: " << (mag - rSum) << std::endl;
    }
    else if (rSum > mag)
    {
        std::cout << "The spheres are intersecting. They are ovelapping by a distance of: " << (rSum - mag) << std::endl;
    }
    else
    {
        std::cout << "The spheres are perfectly touching." << std::endl;
    }

    return 0;
}
