#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBtlStyle.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_LevelUpImpl_S.generated.h"

class UBorder;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_LevelUpImpl_S : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBorder*> border_color_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidgetSwitcher*> switcher_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* default_anim;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlStyle, FLinearColor> StyleColorDic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlStyle, int32> StyleIdxDic;
    
public:
    UMacanUserWidget_LevelUpImpl_S();

    UFUNCTION(BlueprintCallable)
    void Play(EBtlStyle Style);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EBtlStyle, int32> getStyleIdxDic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EBtlStyle, FLinearColor> getStyleColorDic() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void abort();
    
};

