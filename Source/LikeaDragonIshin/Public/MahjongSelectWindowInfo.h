#pragma once
#include "CoreMinimal.h"
#include "EUIMahjongSelectMessageType.h"
#include "EUIState.h"
#include "MahjongSelectWindowInfo.generated.h"

USTRUCT(BlueprintType)
struct FMahjongSelectWindowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState SelectWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMahjongSelectMessageType SelectMessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectWindowCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateSelectWindowCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EnterSelectWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateSelectWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateEnterSelectWindow;
    
    LIKEADRAGONISHIN_API FMahjongSelectWindowInfo();
};

