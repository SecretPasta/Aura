// Copyright Boris Shoostin

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */

UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
public:

	AAuraCharacter();

	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	
private:
	
};