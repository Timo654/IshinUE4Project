#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Main_TougiResult.generated.h"

class UMUW_TougiResult_Bg;
class UMUW_TougiResult_BgFude;
class UMUW_TougiResult_BgPlayer;
class UMUW_TougiResult_InfoBtn;
class UMUW_TougiResult_ResultWindow;
class UMUW_TougiResult_TitleMode;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Main_TougiResult : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMUW_TougiResult_Bg* TougiResult_Bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMUW_TougiResult_BgPlayer* TougiResult_BgPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMUW_TougiResult_BgFude* TougiResult_BgFude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMUW_TougiResult_TitleMode* TougiResult_TitleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMUW_TougiResult_InfoBtn* TougiResult_InfoBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMUW_TougiResult_ResultWindow* TougiResult_ResultWindow;
    
    UMacanUserWidget_Main_TougiResult();

};

