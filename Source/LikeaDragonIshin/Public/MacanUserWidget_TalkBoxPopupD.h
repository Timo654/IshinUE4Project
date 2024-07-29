#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHeadPictFrameType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TalkBoxPopupD.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TalkBoxPopupD : public UMacanUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BaseSize;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Pos;
    
    UMacanUserWidget_TalkBoxPopupD();

    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Transition(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Size(float X, float Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Set(const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Pack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Opacity(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Frame(EHeadPictFrameType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdate();
    
};

