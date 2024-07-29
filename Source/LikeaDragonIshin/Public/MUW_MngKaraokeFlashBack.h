#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MngKaraokeFlashbackItem.h"
#include "MUW_MngKaraokeFlashBack.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable, EditInlineNew)
class UMUW_MngKaraokeFlashBack : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMngKaraokeFlashbackItem> flashbackItemList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_pInputListener;
    
public:
    UMUW_MngKaraokeFlashBack();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelectFlachbackMenu(int32 musicIndex);
    
};

