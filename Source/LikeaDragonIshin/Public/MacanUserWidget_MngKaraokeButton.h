#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMngKaraokeButtonKind.h"
#include "EMngKaraokePushType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MngKaraokeButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngKaraokeButton : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D anchorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float tieLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMngKaraokePushType pushType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMngKaraokeButtonKind ButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSolo;
    
    UMacanUserWidget_MngKaraokeButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisibleNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Resize(bool isLefty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayResultNotify(int32 Index, bool isStart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitNotify();
    
};

