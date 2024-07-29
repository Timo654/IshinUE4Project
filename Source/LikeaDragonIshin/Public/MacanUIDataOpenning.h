#pragma once
#include "CoreMinimal.h"
#include "EUIOpeningPageType.h"
#include "MacanUIData.h"
#include "MacanUIDataOpenning.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataOpenning : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIOpeningPageType pageType;
    
    UMacanUIDataOpenning();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJapaneseLanguage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAsianLanguage() const;
    
};

