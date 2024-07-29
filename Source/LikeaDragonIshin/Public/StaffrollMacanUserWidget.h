#pragma once
#include "CoreMinimal.h"
#include "EUIStaffrollLanguage.h"
#include "EUIStaffrollPlatform.h"
#include "MacanUserWidget.h"
#include "StaffrollInfo.h"
#include "StaffrollMacanUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UStaffrollMacanUserWidget : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float progress;
    
    UStaffrollMacanUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartPlay(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void StartLoad();
    
    UFUNCTION(BlueprintCallable)
    void Release();
    
    UFUNCTION(BlueprintCallable)
    bool IsReady();
    
    UFUNCTION(BlueprintCallable)
    TArray<FStaffrollInfo> GetStaffRollInfomations();
    
    UFUNCTION(BlueprintCallable)
    EUIStaffrollPlatform GetPlatform();
    
    UFUNCTION(BlueprintCallable)
    EUIStaffrollLanguage GetLanguage();
    
    UFUNCTION(BlueprintCallable)
    bool ExecSetData();
    
};

