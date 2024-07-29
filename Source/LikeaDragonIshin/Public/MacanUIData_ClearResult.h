#pragma once
#include "CoreMinimal.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "ListItem.h"
#include "MacanUIData.h"
#include "MacanUIData_ClearResult.generated.h"

UCLASS(Blueprintable)
class UMacanUIData_ClearResult : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState state_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState state_ItemWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FListItem> m_itemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_add_money;
    
    UMacanUIData_ClearResult();

    UFUNCTION(BlueprintCallable)
    bool IsDirty_Result(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty_ItemWin(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelDirty_Result();
    
    UFUNCTION(BlueprintCallable)
    void DelDirty_ItemWin();
    
};

