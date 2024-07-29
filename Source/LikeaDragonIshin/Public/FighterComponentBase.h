#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FighterComponentBase.generated.h"

class ADevil2Human;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UFighterComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADevil2Human* m_OwnerHuman;
    
public:
    UFighterComponentBase(const FObjectInitializer& ObjectInitializer);

};

