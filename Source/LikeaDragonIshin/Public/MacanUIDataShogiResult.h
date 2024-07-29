#pragma once
#include "CoreMinimal.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataShogiResult.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataShogiResult : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BattlePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MattaPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 mattaNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SuperMattaPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 totalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState myState;
    
    UMacanUIDataShogiResult();

    UFUNCTION(BlueprintCallable)
    bool ShowTotalPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    bool ShowSuperMattaPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    bool ShowMattaPoint(int32 Point, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    bool ShowBattlePoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    bool OutWindow();
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyTotalPoint(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySuperMattaPoint(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyMattaPoint(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyBattlePoint(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool InWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyTotalPoint();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySuperMattaPoint();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyMattaPoint();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyBattlePoint();
    
};

