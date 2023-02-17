#include <synfig/rendering/primitive/contour.h>
#include <synfig/rendering/software/function/contour.h>
#include <synfig/surface.h>

int main()
{
    static constexpr int WIDTH = 1024;
    static constexpr int HEIGHT = 400;

    synfig::Surface surface{WIDTH, HEIGHT};

    synfig::rendering::Contour contour;
    contour.move_to({100, 100});
    contour.line_to({900, 110});
    contour.line_to({100, 200});
    contour.line_to({800, 210});
    contour.line_to({100, 300});
    contour.line_to({900, 310});
    contour.close();

    synfig::rendering::software::Contour::render_contour(
        surface, contour.get_chunks(), false, true,
        synfig::rendering::Contour::WindingStyle::WINDING_NON_ZERO,
        synfig::Matrix{}, synfig::Color::blue(), 1,
        synfig::Color::BlendMethod::BLEND_ADD);

    std::cout << "P3\n";
    std::cout << WIDTH << " " << HEIGHT << '\n';
    std::cout << 255 << '\n';
    for (size_t y = 0; y < HEIGHT; y++) {
        for (size_t x = 0; x < WIDTH; x++) {
            synfig::Color color = surface[y][x];
            std::cout << int(std::round(color.get_r() * 255)) << " "
                      << int(std::round(color.get_g() * 255)) << " "
                      << int(std::round(color.get_b() * 255)) << " ";
            std::cout << '\n';
        }
    }
}
