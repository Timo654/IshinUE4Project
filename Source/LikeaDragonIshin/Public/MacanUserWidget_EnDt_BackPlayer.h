#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_EnDt_BackPlayer.generated.h"

class UMacanUserWidget_PartsPlayerIconChoice;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_EnDt_BackPlayer : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_PartsPlayerIconChoice*> PartsPlayerIconChoiceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeOut;
    
    UMacanUserWidget_EnDt_BackPlayer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSensekiEvent(int32 win, int32 lose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemEvent(int32 idx, const FText& ItemName, const UTexture2D* itemTex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyStyleEvent(const FText& enemyStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyNameEvent(const FText& enemyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyFaceEvent(const UTexture2D* faceTex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInEvent();
    
};

