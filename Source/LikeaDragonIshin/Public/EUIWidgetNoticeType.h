#pragma once
#include "CoreMinimal.h"
#include "EUIWidgetNoticeType.generated.h"

UENUM(BlueprintType)
enum class EUIWidgetNoticeType : uint8 {
    NotSet,
    ChangeForcedRenderOpacityALLMainWidget,
    ChangeForcedRenderOpacityScreenFade,
    ChangeBtnGuideItemArrayToSimpeH,
    ChangeCurrentInputDeviceType,
    ChangeCurrentInputKeyboardType,
    ChangeSystemFontType,
    ChangeCurrentFontSize,
    ChangeSubtitleFontSize,
    ChangeTextFontColor,
    ChangeTextSpeakerFontColor,
    ChangeSubtitleFontColor,
    ChangeSubtitleSpeakerFontColor,
    ChangeSubtitleBackColor,
    ChangeTextWindowColor,
    ChangeUIDisp,
};

