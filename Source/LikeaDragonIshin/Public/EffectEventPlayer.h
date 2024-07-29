#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EffectEventPlayer.generated.h"

class AActor;
class UDiEventElementPlayComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UEffectEventPlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDiEventElementPlayComponent*> Elements;
    
public:
    UEffectEventPlayer();

};

