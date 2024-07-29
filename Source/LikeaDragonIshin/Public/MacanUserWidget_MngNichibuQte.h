#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMngNichibuClimaxType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MngNichibuQte.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngNichibuQte : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMngNichibuClimaxType climaxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D cursorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D goalPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> checkPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> pointPositions;
    
    UMacanUserWidget_MngNichibuQte();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugeFrameNotify(float Frame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorPositionNotify(FVector2D Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGoalEffectNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeQteNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeMojiNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeGaugeNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeCursorOugiNotify(bool isIn);
    
};

