#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterFlushFlagComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UCharacterFlushFlagComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShift: 1;
    
    UCharacterFlushFlagComponent(const FObjectInitializer& ObjectInitializer);

};

