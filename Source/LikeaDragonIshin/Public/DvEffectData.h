#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DvEffectData.generated.h"

class AActor;
class UActorComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDvEffectData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* m_pActorComponent;
    
public:
    UDvEffectData();

};

