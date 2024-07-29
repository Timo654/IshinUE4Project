#pragma once
#include "CoreMinimal.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataWindowItemGet.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataWindowItemGet : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowItemGetOpenWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowItemGetCloseWindowEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName infoItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 itemNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isVisibleItemGetWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState windowUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 itemValue;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowItemGetOpenWindowEnd OnDelegateOpenWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowItemGetCloseWindowEnd OnDelegateCloseWindowEnd;
    
    UMacanUIDataWindowItemGet();

    UFUNCTION(BlueprintCallable)
    void SetVisibleItemGetWIndow(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemValue(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemNumber(int32 Number);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemID(FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindow();
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyName(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyItemNumber(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyItemID(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyItemAny(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelBfOpeningWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyName();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyItemNumber();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyItemID();
    
    UFUNCTION(BlueprintCallable)
    void DelBfClosingWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindow(bool quick);
    
};

