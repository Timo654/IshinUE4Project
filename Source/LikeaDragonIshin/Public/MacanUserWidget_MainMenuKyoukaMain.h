#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MainMenuKyoukaMain.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LIKEADRAGONISHIN_API UMacanUserWidget_MainMenuKyoukaMain : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_MainMenuKyoukaMain();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EditingUpdateCursorUIState(EUIState newUIState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EditingUpdateCursorPos(UPARAM(Ref) FVector2D& InPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EditingIsCursorUIState(EUIState checkUIState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EditingGetUnitPosArray(UPARAM(Ref) TArray<FVector2D>& outPosArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EditingGetUnitPos(int32 Index, UPARAM(Ref) FVector2D& outPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EditingGetCursorSize(UPARAM(Ref) FVector2D& outSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EditingGetCursorPosFromMousePos(UPARAM(Ref) FVector2D& outPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EditingGetCanvasPanelSize(UPARAM(Ref) FVector2D& outSize);
    
};

