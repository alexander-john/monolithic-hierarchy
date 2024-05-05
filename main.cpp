#include <iostream>

class GameObject {
public:
    virtual void update() {
        std::cout << "Updating GameObject\n";
    }

    virtual void render() {
        std::cout << "Rendering GameObject\n";
    }
};

class Player : public GameObject {
public:
    void update() override {
        std::cout << "Updating Player\n";
    }

    void render() override {
        std::cout << "Rendering Player\n";
    }
};

class Enemy : public GameObject {
public:
    void update() override {
        std::cout << "Updating Enemy\n";
    }

    void render() override {
        std::cout << "Rendering Enemy\n";
    }
};

int main() {
    Player player;
    Enemy enemy;

    GameObject* gameObjects[] = { &player, &enemy };

    for (auto gameObject : gameObjects) {
        gameObject->update();
        gameObject->render();
    }

    return 0;
}
