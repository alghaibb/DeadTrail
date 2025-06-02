
#include "Core/DTGameModeBase.h"
#include "Characters/DTPlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADTGameModeBase::ADTGameModeBase()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Characters/Player/Blueprints/BP_DTPlayerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
