#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TaishiAdmit_SelWindow.generated.h"

class UMacanRichTextBlock;
class UMacanUserWidget_TaishiAdmit_Selection;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiAdmit_SelWindow : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanRichTextBlock* text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiAdmit_Selection* sel_cursor_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiAdmit_Selection* sel_cursor_R;
    
    UMacanUserWidget_TaishiAdmit_SelWindow();

};

