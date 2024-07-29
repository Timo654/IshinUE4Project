#pragma once
#include "CoreMinimal.h"
#include "ESaveMode.h"
#include "ESortType.h"
#include "MacanUserWidget.h"
#include "SaveDataInfo.h"
#include "MacanUserWidget_PauseSave.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_PauseSave : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_PauseSave();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSaveDataInfo(const int32 Index, const FSaveDataInfo& SaveDataInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCursor(const int32 Current, const int32 Next);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateConfirmCursor(const int32 Current, const int32 Next);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchToConfirmationDone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Sort(const ESortType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupSaveDataInfoArray(const TArray<FSaveDataInfo>& in_array);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMode(const ESaveMode mde);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorText(const FString& Yes, const FString& No);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmationTitleText(const FString& text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmationSaveDataInfo(const FSaveDataInfo& save_data_info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmationDoneTitleText(const FString& text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmationDoneSaveDataInfo(const FSaveDataInfo& save_data_info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmationDoneDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmationDoneCursorText(const FString& text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefocusDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutProcessing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutConfirmationDone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutConfirmation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInProcessing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInConfirmationDone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInConfirmation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
};

