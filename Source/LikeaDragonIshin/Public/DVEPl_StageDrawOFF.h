#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_StageDrawOFF.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_StageDrawOFF : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InvisibleActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> InvisibleComponents;
    
public:
    UDVEPl_StageDrawOFF();

};

