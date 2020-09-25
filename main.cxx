#include <SFML/Graphics.hpp>
#include <string>
#include <filesystem>
#include <iostream>

using namespace sf;

int main(int argc, char **argv) {
	VideoMode vm(1920, 1080);
	RenderWindow window(vm, "Emptyspace", Style::Fullscreen);

	Texture textureBackground;
	std::filesystem::path bgPath;
	bgPath = argv[0];
	bgPath.remove_filename();
	bgPath.append("assets/images/background1.png");
	textureBackground.loadFromFile(bgPath);
	Sprite spriteBackground;
	spriteBackground.setTexture(textureBackground);
	spriteBackground.setPosition(0, 0);

	while (window.isOpen()) {
		if (Keyboard::isKeyPressed(Keyboard::Escape)) {
			window.close();
		}

		// Update scene

		// Draw scene
		window.draw(spriteBackground);

		// Clear everything from last frame
		window.clear();

		// Display the current scene
		window.display();
	}
	return(0);
}
