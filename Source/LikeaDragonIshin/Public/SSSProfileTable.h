#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSSProfileTable.generated.h"

class USubsurfaceProfile;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FSSSProfileTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubsurfaceProfile* DefaultProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubsurfaceProfile* LightProfile;
    
    FSSSProfileTable();
};

