#pragma once
#include "CoreMinimal.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MngKaraokeResult.generated.h"

class UInputDeviceListener;
class UMacanUIDataKaraokeWindow;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngKaraokeResult : public UMacanUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_pInputListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMacanUIDataKaraokeWindow> m_pUIMgKaraokeWindow;
    
public:
    UMacanUserWidget_MngKaraokeResult();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTokutenEvent(int32 Point);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetResultCountEvent(int32 great, int32 good, int32 bad, int32 miss);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HankoEvent(EUIState State, int32 rank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DispNewRankEvent(bool b_new_rank, int32 Point, int32 point_max);
    
};

