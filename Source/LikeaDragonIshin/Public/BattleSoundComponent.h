#pragma once
#include "CoreMinimal.h"
#include "FighterComponentBase.h"
#include "BattleSoundComponent.generated.h"

class ADevil2Human;
class UCueObject;
class USoundAtomCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UBattleSoundComponent : public UFighterComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADevil2Human* OwnerFighter;
    
public:
    UBattleSoundComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UCueObject* PrepareAndPlayVoice(USoundAtomCue* Cue, bool ignore_pos);
    
};

