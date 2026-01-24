// Copyright Boris Shoostin

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "Game/LoadMenuSaveGame.h"
#include "MVVM_LoadSlot.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetWidgetSwitcherIndex, int32, WidgetSwitcherIndex);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnableSelectSlotButton, bool, bEnable);

/**
 * 
 */
UCLASS()
class AURA_API UMVVM_LoadSlot : public UMVVMViewModelBase
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(BlueprintAssignable)
	FSetWidgetSwitcherIndex SetWidgetSwitcherIndex;
	
	UPROPERTY(BlueprintAssignable)
	FEnableSelectSlotButton EnableSelectSlotButton;
	
	void InitializeSlot();
	
	
	UPROPERTY()
	FString SlotIndex;
	
	UPROPERTY()
	TEnumAsByte<ESaveSlotStatus> SlotStatus;
	
	/** Field Notifies */
	
	void SetPlayerName(FString InPlayerName);
	void SetLoadSlotName(FString InLoadSlotName);
	
	FString GetLoadSlotName() const {return LoadSlotName;};
	FString GetPlayerName() const { return PlayerName; }
private:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, FieldNotify, Setter, Getter, meta=(AllowPrivateAccess = "true"))
	FString LoadSlotName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, FieldNotify, Setter, Getter, meta=(AllowPrivateAccess = "true"))
	FString PlayerName;
};
