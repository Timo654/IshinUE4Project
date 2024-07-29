#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "Components/RichTextBlock.h"
#include "EUISwitchingFontColorType.h"
#include "EUISwitchingFontSizeType.h"
#include "TextBlockKeyconfigInfo.h"
#include "UISwitchingFontColorSet.h"
#include "UISwitchingFontSizeSet.h"
#include "MacanRichTextBlock.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UMacanRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _IsEnableDispCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _DispCharacterCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _CurrentTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _OverrideCurrentFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISwitchingFontSizeSet _SwitchingFontSizeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISwitchingFontSizeSet _SwitchingSubtitleFontSizeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSetHilightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor hilightColor_White;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor hilightColor_Yellow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor hilightColor_Blue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor hilightColor_Red;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor hilightColor_Green;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _EnableOverrideCurrentColor;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isInvariantMacan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _ControlWrapTextByLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _ObliqueParamShearX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _ObliqueParamShearY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D _ObliqueParamPivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D _ObliqueParamTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _ObliqueParamOffsetCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockKeyconfigInfo keyconfigInfo;
    
public:
    UMacanRichTextBlock();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateOverrideCurrentColor(UPARAM(Ref) FSlateColor& inColor);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentTextStyle(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void SetNumTextPlusUnderline(int32 inNum, int32 inMaxDigits, int32 inLineDigit);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDispCount(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterCount(int32 inCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAccessibilitySetting();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSystemFont(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingTextSpeakerColor(EUISwitchingFontColorType inType);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingTextColor(EUISwitchingFontColorType inType);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingSubtitleSpeakerColor(EUISwitchingFontColorType inType);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingSubtitleFontSize(EUISwitchingFontSizeType inType);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingSubtitleColor(EUISwitchingFontColorType inType);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingFontSize(EUISwitchingFontSizeType inType);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateDipFontInvisible(bool isInvisible);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateButtonIcon();
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetCharacterStringFullText();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCharacterCountLength();
    
};

