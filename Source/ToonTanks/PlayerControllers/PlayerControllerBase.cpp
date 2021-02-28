// Written by Omer Kocar


#include "PlayerControllerBase.h"

void APlayerControllerBase::SetPlayerEnabledState(bool SetPlayerEnabled)
{
	if (SetPlayerEnabled)
	{
		GetPawn()->EnableInput(this);
		APlayerControllerBase::bShowMouseCursor = true;
	}
	else
	{
		GetPawn()->DisableInput(this);
		APlayerControllerBase::bShowMouseCursor = false;
	}
}