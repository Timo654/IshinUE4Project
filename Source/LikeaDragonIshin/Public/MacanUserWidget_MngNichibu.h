#pragma once
#include "CoreMinimal.h"
#include "EMngNichibuDirection.h"
#include "EMngNichibuResponse.h"
#include "EMngNichibuWidget.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MngNichibu.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngNichibu : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCanvasPanel*> lanePanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMngNichibuWidget, bool> widgetVisibleMap;
    
    UMacanUserWidget_MngNichibu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDirectionPadNotify(int32 Side, EMngNichibuDirection Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetupCallBack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScoreGaugeNotify(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetComboCountNotify(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetComboColorNotify(float Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcPushEffectNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcPushButtonNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcNotesNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcHeatButtonNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayResultAnimNotify(EMngNichibuResponse Response, int32 Side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitNotify(bool isHonkaku);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeTokutenEffNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeNyuryokuBaseNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeKiwamiNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeKiwamiBaseNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInputNoteBaseNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeComboNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeClearLineNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeBaseNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawScoreNotify(int32 Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawQualifyScoreNotify(int32 qualify);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawHeatGaugeNotify(float Rate);
    
};

