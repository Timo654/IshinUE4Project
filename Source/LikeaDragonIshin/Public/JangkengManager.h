#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "JangkengManager.generated.h"

class ADevil2Human;

UCLASS(Blueprintable)
class AJangkengManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_end;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADevil2Human* m_player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADevil2Human* m_companion;
    
public:
    AJangkengManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetScenarioResult(bool is_win);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerHuman(ADevil2Human* Player);
    
    UFUNCTION(BlueprintCallable)
    void SetIsActive(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetCompanionHuman(ADevil2Human* companion);
    
    UFUNCTION(BlueprintCallable)
    bool ReturnSequence(bool win);
    
    UFUNCTION(BlueprintCallable)
    void PlayDecideEff();
    
    UFUNCTION(BlueprintCallable)
    FVector GetPlayerKataLPos();
    
    UFUNCTION(BlueprintCallable)
    FVector GetCompanionKubiPos();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndUpdate();
    
    UFUNCTION(BlueprintCallable)
    bool CheckDipWinForce();
    
};

