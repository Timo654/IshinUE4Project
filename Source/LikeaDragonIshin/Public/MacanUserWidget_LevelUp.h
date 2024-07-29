#pragma once
#include "CoreMinimal.h"
#include "EBtlStyle.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_LevelUp.generated.h"

class UMacanUserWidget_LevelUpImpl_A;
class UMacanUserWidget_LevelUpImpl_S;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_LevelUp : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_LevelUpImpl_A* impl_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_LevelUpImpl_S* impl_S;
    
    UMacanUserWidget_LevelUp();

    UFUNCTION(BlueprintCallable)
    void onLvUp(EBtlStyle Style);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void abort();
    
};

