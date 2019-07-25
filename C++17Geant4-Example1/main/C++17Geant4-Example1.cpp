#include "G4RunManager.hh"
#include <memory>

int main(int argc, char** argv)
{
	std::unique_ptr<G4RunManager> runManager {std::make_unique<G4RunManager>()};

	G4cout << "C++17 GEANT4!" << G4endl;

	return 0;
}
