#include <GSgame.h>

class MyGame : public gslib::Game {
	void start() {
		gsLoadTexture(0, "Assets/unity_logo_white.png");
	}
	void draw() {
		gsDrawSprite2D(0, NULL, NULL, NULL, NULL, NULL, 0.0f);
	}
};

int main() {
	return MyGame().run();
}