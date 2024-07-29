#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "Components/TextBlock.h"
#include "EUISwitchingFontColorType.h"
#include "EUISwitchingFontSizeType.h"
#include "UISwitchingFontColorSet.h"
#include "UISwitchingFontSizeSet.h"
#include "MacanTextBlock.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UMacanTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isInvariantMacan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _ControlWrapTextByLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISwitchingFontSizeSet _SwitchingFontSizeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor _OverrideCurrentColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISwitchingFontColorSet _SwitchingTextColorSizeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISwitchingFontColorSet _SwitchingTextSpeakerColorSizeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISwitchingFontColorSet _SwitchingSubtitleColorSizeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISwitchingFontColorSet _SwitchingSubtitleSpeakerColorSizeSet;
    
public:
    UMacanTextBlock();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateOverrideCurrentColor(UPARAM(Ref) FSlateColor& inColor);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInvariant(bool is_invariant);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateSystemFont(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingTextSpeakerColor(EUISwitchingFontColorType inType);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingTextColor(EUISwitchingFontColorType inType);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingSubtitleSpeakerColor(EUISwitchingFontColorType inType);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingSubtitleColor(EUISwitchingFontColorType inType);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingFontSize(EUISwitchingFontSizeType inType);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateDipFontInvisible(bool isInvisible);
    
};

