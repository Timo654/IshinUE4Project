#pragma once
#include "CoreMinimal.h"
#include "EEquipRank.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "ItemAbilityDispData.h"
#include "MacanUIData.h"
#include "MacanUIDataItemGet.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataItemGet : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataItemGetOpenWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataItemGetCloseWindowEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName infoItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 itemNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isVisibleItemGet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPlayable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 armRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipRank equipRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> markList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAbilityDispData> markDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 totalRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState windowUIState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataItemGetOpenWindowEnd OnDelegateOpenWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataItemGetCloseWindowEnd OnDelegateCloseWindowEnd;
    
    UMacanUIDataItemGet();

    UFUNCTION(BlueprintCallable)
    void Unload();
    
    UFUNCTION(BlueprintCallable)
    bool StayWindow();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleItemGet(bool IsVisible, bool isBattle);
    
    UFUNCTION(BlueprintCallable)
    bool SetTotalRarity(int32 Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayable(bool inPlayable);
    
    UFUNCTION(BlueprintCallable)
    bool SetMarkData(int32 Index, FItemAbilityDispData markData);
    
    UFUNCTION(BlueprintCallable)
    bool SetMark(int32 Index, FName markID);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemNumber(int32 Number);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemID(FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    void SetArmRank(int32 Rate);
    
    UFUNCTION(BlueprintCallable)
    void RequestTestData(int32 item_id, EEquipRank rank, TArray<FItemAbilityDispData> inArray);
    
    UFUNCTION(BlueprintCallable)
    void RequestTest(int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindow();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyRarity(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyName(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyMark(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyItemNumber(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyItemID(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyItemAny(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void InitMarks(int32 maxMarks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUIState GetActiveUIState() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecTest(bool isExe);
    
    UFUNCTION(BlueprintCallable)
    bool EndWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfOpeningWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyRarityt();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyName();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyMark();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyItemNumber();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyItemID();
    
    UFUNCTION(BlueprintCallable)
    void DelBfClosingWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CloseManualWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CheckArmProtectorFromNumber(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    bool CheckArmProtector(FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    bool AddMarks(FName markID);
    
    UFUNCTION(BlueprintCallable)
    bool AddMarkDatas(FItemAbilityDispData markData);
    
};

