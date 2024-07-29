#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MiniMapIconActor.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class AMiniMapIconActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName texName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iconId;
    
    AMiniMapIconActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture(const UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void setOpacity(float Opacity);
    
};

