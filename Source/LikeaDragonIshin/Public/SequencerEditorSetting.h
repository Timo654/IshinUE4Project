#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SequencerEditorSetting.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Editor)
class LIKEADRAGONISHIN_API USequencerEditorSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisibleSequencerExtButton;
    
    USequencerEditorSetting();

};

