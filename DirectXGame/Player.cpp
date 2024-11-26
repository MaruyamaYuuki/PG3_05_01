#include "Player.h"
#include "base/TextureManager.h"


Player::Player()
{
}

Player::~Player()
{
	delete sprite_;
}

void Player::Init()
{
	textureHandle_ = KamataEngine::TextureManager::Load("white.png");
	sprite_ = KamataEngine::Sprite::Create(textureHandle_, {0,0});
}

void Player::Update()
{
	sprite_->SetPosition(pos_);
}

void Player::Draw()
{
	sprite_->Draw();
}

void Player::MoveRight()
{
	this->pos_.x += this->speed_;
}

void Player::MoveLeft()
{
	this->pos_.x -= this->speed_;
}
