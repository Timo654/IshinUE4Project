#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateBrush.h"
#include "EPadButton.h"
#include "EUIInputDeviceType.h"
#include "MacanRichTextImageData.generated.h"

USTRUCT(BlueprintType)
struct FMacanRichTextImageData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPadButton PadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIInputDeviceType DeviceType;
    
    LIKEADRAGONISHIN_API FMacanRichTextImageData();
};

