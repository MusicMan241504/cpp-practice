#include <iostream>
namespace MonsterType { // in namespace to avoid potential naming conflicts
	enum MonsterType { // each enumerator has an integral value
		orc, // 0
		goblin, // 1
		troll, // 2
		ogre, // 3
		skeleton //4
	};
}

int main() {
	MonsterType::MonsterType monster { MonsterType::troll };

	switch (monster) {
		case MonsterType::troll:
			std::cout << "AGGGGH" << '\n';
			break; // prevents default being run

		// can put more cases here

		default:
			std::cout << "Hi" << '\n';
			break;

	}

	std::cout << monster << '\n';

	return 0;
}
