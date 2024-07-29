#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DelegateUpdateByGameDelegate.h"
#include "DelegateUpdateBySystemDelegate.h"
#include "DelegateUpdateByUIDelegate.h"
#include "DelegateUpdateDelegate.h"
#include "EUICategory.h"
#include "EUIMainType.h"
#include "EUIOwningType.h"
#include "EUIResultSuccessOrFailed.h"
#include "EUISubCategory.h"
#include "EUIZOrderType.h"
#include "Templates/SubclassOf.h"
#include "MacanUIInfoBase.generated.h"

class UMacanUIData;
class UMacanUserWidget;
class UUserWidget;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UMacanUIInfoBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 bfWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIMainType MainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUICategory category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUISubCategory SubCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* UserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIZOrderType ZOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIOwningType OwningType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIData* UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUIData> UIDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsResident;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CleanupSkipingSpecialCounter;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateUpdate DelegateUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateUpdateByGame DelegateUpdateByGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateUpdateByUI DelegateUpdateByUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateUpdateBySystem DelegateUpdateBySystem;
    
public:
    UMacanUIInfoBase();

    UFUNCTION(BlueprintCallable)
    void SetBfUpdateByUI();
    
    UFUNCTION(BlueprintCallable)
    void SetBfUpdateBySystem();
    
    UFUNCTION(BlueprintCallable)
    void SetBfUpdateByGame();
    
    UFUNCTION(BlueprintCallable)
    void SetBfReqRemoveWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetBfReqReleaseWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetBfReqLoadWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetBfReqDestroyInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetBfReqCreateWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetBfReqAddView();
    
    UFUNCTION(BlueprintCallable)
    void SetBfPrepared();
    
    UFUNCTION(BlueprintCallable)
    void SetBfLoadedWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetBfCreatedWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetBfAddedView();
    
    UFUNCTION(BlueprintCallable)
    void ReflectChangesByUI();
    
    UFUNCTION(BlueprintCallable)
    void ReflectChangesBySystem();
    
    UFUNCTION(BlueprintCallable)
    void ReflectChangesByGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfUpdateByUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfUpdateBySystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfUpdateByGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfReqRemoveWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfReqReleaseWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfReqLoadWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfReqDestroyInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfReqCreateWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfReqAddView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfPrepared() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfLoadedWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfCreatedWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBfAddedView() const;
    
    UFUNCTION(BlueprintCallable)
    void GetUIData(TSubclassOf<UMacanUIData> dataClass, UMacanUIData*& outUIData, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    void DelBfUpdateByUI();
    
    UFUNCTION(BlueprintCallable)
    void DelBfUpdateBySystem();
    
    UFUNCTION(BlueprintCallable)
    void DelBfUpdateByGame();
    
    UFUNCTION(BlueprintCallable)
    void DelBfReqRemoveWidget();
    
    UFUNCTION(BlueprintCallable)
    void DelBfReqReleaseWidget();
    
    UFUNCTION(BlueprintCallable)
    void DelBfReqLoadWidget();
    
    UFUNCTION(BlueprintCallable)
    void DelBfReqDestroyInfo();
    
    UFUNCTION(BlueprintCallable)
    void DelBfReqCreateWidget();
    
    UFUNCTION(BlueprintCallable)
    void DelBfReqAddView();
    
    UFUNCTION(BlueprintCallable)
    void DelBfPrepared();
    
    UFUNCTION(BlueprintCallable)
    void DelBfLoadedWidget();
    
    UFUNCTION(BlueprintCallable)
    void DelBfCreatedWidget();
    
    UFUNCTION(BlueprintCallable)
    void DelBfAddedView();
    
private:
    UFUNCTION(BlueprintCallable)
    void CallUpdate();
    
};

