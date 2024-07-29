#pragma once
#include "CoreMinimal.h"
#include "EUIMainType.h"
#include "TickableGameInstanceSubsystem.h"
#include "LocalizedTextManager.generated.h"

class ULocalizedTextDataAsset;

UCLASS(Blueprintable)
class ULocalizedTextManager : public UTickableGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocalizedTextDataAsset* m_pLocalizedTextDataAsset;
    
public:
    ULocalizedTextManager();

    UFUNCTION(BlueprintCallable)
    void BP_UnLoadStringTable(EUIMainType Type);
    
    UFUNCTION(BlueprintCallable)
    void BP_UnLoadAuthStringTable(const FString& TableId);
    
    UFUNCTION(BlueprintCallable)
    void BP_LoadStringTable(EUIMainType Type);
    
    UFUNCTION(BlueprintCallable)
    void BP_LoadAuthStringTable(const FString& TableId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BP_ConvertLocalizedTextFromFText(const FText& pureString) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BP_ConvertLocalizedTextByUIType(const FText& InText, EUIMainType uiType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BP_ConvertLocalizedText(const FString& pureString) const;
    
};

