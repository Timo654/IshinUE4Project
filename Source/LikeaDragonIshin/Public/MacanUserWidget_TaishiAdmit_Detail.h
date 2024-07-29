#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TaishiAdmit_Detail.generated.h"

class UMacanUserWidget_TaishiDetail_DetailFull;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiAdmit_Detail : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_DetailFull* TaishiDetail;
    
    UMacanUserWidget_TaishiAdmit_Detail();

};

