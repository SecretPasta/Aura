// Copyright Boris Shoostin

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/AuraWidgetController.h"
#include "OverlayWidgetController.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChangedSinature, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxHealthChangedSinature, float, NewMaxHealth);


/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class AURA_API UOverlayWidgetController : public UAuraWidgetController
{
	GENERATED_BODY()
	
public:

	virtual void BroadcastInitialValues() override;

	UPROPERTY(BlueprintAssignable, Category="GAS|Attribues")
	FOnHealthChangedSinature OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category="GAS|Attribues")
	FOnMaxHealthChangedSinature OnMaxHealthChanged;
	
	
};
