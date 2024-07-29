#pragma once
#include "CoreMinimal.h"
#include "EBattleCaptionBossUI.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "MacanUIDataBattleCaptionBoss.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UMacanUIDataBattleCaptionBoss : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* daimonTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* sb2Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* sb2KatagakiTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText sb2Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText sb2KatagakiText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* sb3Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText longText;
    
    UMacanUIDataBattleCaptionBoss();

    UFUNCTION(BlueprintCallable)
    void StopCation();
    
    UFUNCTION(BlueprintCallable)
    void SetSB3(UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable)
    void SetSB2TextNameOnle(FText text);
    
    UFUNCTION(BlueprintCallable)
    void SetSB2Text(FText text, FText kata);
    
    UFUNCTION(BlueprintCallable)
    void SetSB2NameOnle(UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable)
    void SetSB2(UTexture2D* tex, UTexture2D* kata);
    
    UFUNCTION(BlueprintCallable)
    void SetLong(FText text);
    
    UFUNCTION(BlueprintCallable)
    void SetDaimon(UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseWidget();
    
    UFUNCTION(BlueprintCallable)
    void PlaySB3();
    
    UFUNCTION(BlueprintCallable)
    void PlaySB2();
    
    UFUNCTION(BlueprintCallable)
    void PlayLong();
    
    UFUNCTION(BlueprintCallable)
    void PlayDaimon();
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdateThisUI(EBattleCaptionBossUI uiType, EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdate(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void FinishUpdateUI(EBattleCaptionBossUI uiType);
    
};

