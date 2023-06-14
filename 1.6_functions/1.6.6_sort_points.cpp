#include <iostream>
#include <vector>

struct Point
{
    int x;
    int y;
};

int main()
{
    int n;
    std::cin >> n;

    std::vector<Point> points(n);

    for (int i = 0; i < n; ++i)
    {
        int x, y;
        std::cin >> x >> y;
        points[i] = Point{x, y};
    }

    std::sort(
        points.begin(),
        points.end(),
        [](const Point &p1, const Point &p2)
        {
            return p1.x * p1.x + p1.y * p1.y < p2.x * p2.x + p2.y * p2.y;
        });

    for (const auto &point : points)
        std::cout << point.x << " " << point.y << std::endl;
}
