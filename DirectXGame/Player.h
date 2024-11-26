#pragma once
#include "math/Vector2.h"
#include "2d/Sprite.h"

class Player {
public:
	Player();
	~Player();

	void Init();
	void Update();
	void Draw();

	// メンバ関数
	void MoveRight();
	void MoveLeft();

private:
	uint32_t textureHandle_ = 0;
	KamataEngine::Sprite* sprite_ = nullptr;

	KamataEngine::Vector2 pos_ = { 10.0f,30.0f };
	float speed_ = 1.0f;
};