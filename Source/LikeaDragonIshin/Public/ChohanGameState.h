#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChohanGameState.generated.h"

class UMacanUIDataChohan;

UCLASS(Blueprintable)
class AChohanGameState : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSelectInputOK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSelectDecide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataChohan* m_UIData;
    
    AChohanGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGameState(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void BindUIEvent();
    
};

