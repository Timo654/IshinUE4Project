#pragma once
#include "CoreMinimal.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlHactHact.generated.h"

class UImage;
class UMacanUserWidget_BtlHactGaugeMain;
class UMaterialInstanceDynamic;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlHactHact : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIState, UWidgetAnimation*> anim_map_n;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIState, UWidgetAnimation*> anim_map_h;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* elem_NumImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlHactGaugeMain* elem_gauge_add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlHactGaugeMain* elem_gauge_add_diff;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImageSplitLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* im_mat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* playingActionAnim;
    
public:
    UMacanUserWidget_BtlHactHact();

    UFUNCTION(BlueprintCallable)
    void setImmidiateWithoutPerform(float hact, float hact_delta);
    
    UFUNCTION(BlueprintCallable)
    void Set(float hact, float hact_delta);
    
    UFUNCTION(BlueprintCallable)
    void on(bool _isHeat);
    
    UFUNCTION(BlueprintCallable)
    void off();
    
};

