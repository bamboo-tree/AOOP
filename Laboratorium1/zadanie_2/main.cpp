#include <iostream>

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"


int main(){
	
	Animal animal_1 = Animal();
	animal_1.set_is_protected(false);
	animal_1.set_limb_number(2);
	animal_1.set_name("Big boi");

	Animal animal_2 = Animal(4, "Dawg");

	animal_1.info();
	animal_2.info();
	animal_1.voice();


	Dog dog_1 = Dog(4, "Fafik", false);
	dog_1.set_breed("Brazowy");
	dog_1.set_skill_level(0, 5);
	dog_1.set_skill_level(1, 9);

	Dog dog_2 = Dog("Szary", 8, 4);
	dog_2.set_limb_number(4);
	dog_2.set_is_protected(false);
	dog_2.set_name("Bolec");

	dog_1.info();
	dog_2.info();
	dog_1.voice();


	Cat cat_1 = Cat(4, "Kotek", false);
	cat_1.set_level_of_mouse_hunting(10);
	cat_1.init_mice();


	Cat cat_2 = Cat();
	cat_2.init_cat();

	cat_1.info();
	cat_2.info();
	cat_1.voice();


	return 0;
}
