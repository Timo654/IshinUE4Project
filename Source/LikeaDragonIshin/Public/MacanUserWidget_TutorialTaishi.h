#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "TutorialTaishiData.h"
#include "MacanUserWidget_TutorialTaishi.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TutorialTaishi : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget*> tutorialList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialTaishiData> taishiList;
    
    UMacanUserWidget_TutorialTaishi();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTutorialShadow();
    
};

