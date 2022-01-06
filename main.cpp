#include <GSgame.h>
#include <iostream>

class MyGame : public gslib::Game {
	void start() {
		gsLoadTexture(0, "Assets/unity_logo_white.png");
	}
	void draw() {
		gsDrawSprite2D(0, NULL, NULL, NULL, NULL, NULL, 0.0f);
	}
};

int main() {
	std::cout << "‚Ï‚Á‚¿‚¡" << std::endl;
	// aaaa
	return MyGame().run();
}