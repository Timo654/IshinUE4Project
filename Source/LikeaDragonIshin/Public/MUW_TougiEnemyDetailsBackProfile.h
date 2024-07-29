#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MUW_TougiEnemyDetailsBackProfile.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMUW_TougiEnemyDetailsBackProfile : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeOut;
    
    UMUW_TougiEnemyDetailsBackProfile();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWinRateEvent(int32 winRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleEvent(const FText& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStyleEvent(const FText& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSeisekiEvent(int32 win, int32 lose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNameEvent(const FText& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemEvent(int32 idx, const FText& Name, const UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDetailInfo(const FText& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInEvent();
    
};

