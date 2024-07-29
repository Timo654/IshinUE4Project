#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_PhotoModeMain.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LIKEADRAGONISHIN_API UMacanUserWidget_PhotoModeMain : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_PhotoModeMain();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EditingGetCursorPosFromMousePos(UPARAM(Ref) FVector2D& outPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EditingGetCanvasPanelSize(UPARAM(Ref) FVector2D& outSize);
    
};

