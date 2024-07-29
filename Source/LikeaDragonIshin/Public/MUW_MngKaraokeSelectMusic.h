#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MngKaraokeSelectMusicItem.h"
#include "MUW_MngKaraokeSelectMusic.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable, EditInlineNew)
class UMUW_MngKaraokeSelectMusic : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMngKaraokeSelectMusicItem> selectMusicItemList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_pInputListener;
    
public:
    UMUW_MngKaraokeSelectMusic();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelectMusicMenu(int32 musicIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAinoteMode(int32 musicIndex);
    
};

