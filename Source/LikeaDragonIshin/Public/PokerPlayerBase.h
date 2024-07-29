#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PokerPlayerBase.generated.h"

class UMacanUIDataPoker;

UCLASS(Blueprintable)
class APokerPlayerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_ForbidAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataPoker* UIData;
    
public:
    APokerPlayerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUiData(UMacanUIDataPoker* Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeatNum() const;
    
};

