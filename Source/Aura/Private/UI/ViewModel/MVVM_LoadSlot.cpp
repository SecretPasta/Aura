// Copyright Boris Shoostin


#include "UI/ViewModel/MVVM_LoadSlot.h"

void UMVVM_LoadSlot::InitializeSlot()
{
	// TODO:  Check Slot Status based on loaded data.
	SetWidgetSwitcherIndex.Broadcast(1);
}
