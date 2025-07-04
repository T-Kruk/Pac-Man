#pragma once
#include <SFML/Graphics.hpp>
class Entity{
	public:
		Entity(sf::RectangleShape body, sf::Vector2f position);
		virtual void update(sf::Time dt, sf::Vector2f playerPosition) = 0;
		void draw(sf::RenderWindow& window);
		sf::Vector2f getPosition();	
		sf::Vector2f getBaseVector();
		
	protected:
		void turn(sf::Vector2i turnVector);
		sf::RectangleShape body;
		sf::Vector2f velocity;
		sf::Vector2f baseVector;
		sf::Vector2f position;
		sf::Vector2f startPosition;
		sf::Vector2i nextTurn;
		bool turnQueued;
		float speed = 200.0f; 
		static sf::Vector2i rightTurn;
};
