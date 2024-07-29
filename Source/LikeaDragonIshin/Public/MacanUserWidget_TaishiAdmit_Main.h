#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "TaishiCardDataDetail.h"
#include "MacanUserWidget_TaishiAdmit_Main.generated.h"

class UMacanUserWidget_TaishiAdmit_Detail;
class UMacanUserWidget_TaishiAdmit_SelWindow;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiAdmit_Main : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiAdmit_Detail* TaishiDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiAdmit_SelWindow* selecter;
    
    UMacanUserWidget_TaishiAdmit_Main();

    UFUNCTION(BlueprintCallable)
    void SetText(const FText& _text);
    
    UFUNCTION(BlueprintCallable)
    void setSelectionText(bool isRight, const FText& _text);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const FTaishiCardDataDetail& Data);
    
    UFUNCTION(BlueprintCallable)
    void on(bool forIntro);
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isDecided() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool getSelected() const;
    
};

